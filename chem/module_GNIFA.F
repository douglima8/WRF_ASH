!-----------------------------------------------------------------------------------------
! Gocart-MP28 coupler
! called when chem_opt=300 AND mp_physics=28
! Number Ice Friendly Aerosol from gocart dust model. 
! Implementation into WRF-Chem by U. Rizza, 2020 (u.rizza@isac.cnr.it)
! GNIFA [kg^-1] from module_mp_thompson.F
! tendust [kg^-1 s^-1] from module_mp_thompson.F
! mp_dust(5) defined in module_data_gocart_dust.F
! call GNIFA_driver(chem,grid%GNIFA,config_flags,
!-----------------------------------------------------------------------------------------
 !subroutine GNIFA_driver(chem,dt,curr_secs,GNIFA,tendust,config_flags,        &
 subroutine GNIFA_driver(chem,GNIFA,config_flags,                             &
                             ids,ide, jds,jde, kds,kde,                       &
                             ims,ime, jms,jme, kms,kme,                       &
                             its,ite, jts,jte, kts,kte)                             

 USE module_state_description   ! num_chem, p_qr, ...
 USE module_model_constants     ! rhowater in kg/m3
 USE physconst                  ! rair, ...
 USE module_data_gocart_dust         
 USE module_configure

 IMPLICIT NONE
 TYPE(grid_config_rec_type),INTENT(IN):: config_flags
 integer                              :: d, i, j, k, l         ! loop
 integer, parameter                   :: nbinsa=5              ! number of dust bins
 integer                              :: bins(nbinsa)          ! dust bin numbers in chem
 INTEGER,  INTENT(IN)                 :: ids,ide, jds,jde, kds,kde,    &
                                         ims,ime, jms,jme, kms,kme,    &
                                         its,ite, jts,jte, kts,kte
 !REAL, INTENT(IN) :: dt
 real             :: conver9, converi9      ! ug/kg => kg/kg
 integer          :: jjn,jchem
 !REAL(KIND=8),INTENT(IN) :: curr_secs
 logical                    :: Tcond0
 !logical,parameter         :: wetscav_onoff=.true.   !! gocart-coupler
 logical,parameter          :: wetscav_onoff=.false.

 REAL, DIMENSION( ims:ime, kms:kme, jms:jme, num_chem ),INTENT(INOUT) :: chem     !! (ug/kg-dryair)
 REAL, DIMENSION( ims:ime ,kms:kme, jms:jme,5) :: N_dust,phin,wscav       !! eqs.4,6
 REAL, DIMENSION( ims:ime ,kms:kme, jms:jme), INTENT(INOUT ) :: GNIFA !!!!,tendust

 bins(1)=p_dust_1                ! dust bin number 1 in chem(i,k,j,p_dust_1)
 bins(2)=p_dust_2                ! dust bin number 2 in chem
 bins(3)=p_dust_3                ! dust bin number 3 in chem
 bins(4)=p_dust_4                ! dust bin number 4 in chem
 bins(5)=p_dust_5                ! dust bin number 5 in chem

 conver9  = 1.e-9               ! transformation ug/kg-dryair to kg/kg-dryair
 converi9 = 1.e9                ! transformation kg/kg-dryair to ug/kg-dryair

 wscav(:,:,:,:)=0.00            !! if wetscav_onoff=.true. wscav is updated below

 do j = jts, jte
    do k = kts, kte
       do i = its, ite
  
          do jjn=1,nbinsa,1
             N_dust(i,k,j,jjn)=conver9*chem(i,k,j,bins(jjn))/mp_dust(jjn)       ! [10^9*ug kg^-1]/[kg] => kg^-1
          end do

          dust_select:  SELECT CASE(config_flags%dust_opt)  
          CASE (DUSTUOC)  
             GNIFA(i,k,j)=N_dust(i,k,j,1)+N_dust(i,k,j,2)+N_dust(i,k,j,3)+N_dust(i,k,j,4)
             do jjn=1,nbinsa-1,1                            
                phin(i,k,j,jjn) = N_dust(i,k,j,jjn)/GNIFA(i,k,j)      !! eq.6 Su&Fung
                !if (wetscav_onoff) wscav(i,k,j,jjn)=tendust(i,k,j)*phin(i,k,j,jjn)*mp_dust(jjn)*dt 
                !chem(i,k,j,bins(jjn))=chem(i,k,j,bins(jjn))-wscav(i,k,j,jjn)
             end do
          CASE (DUSTGOCARTAFWA)
             GNIFA(i,k,j)=N_dust(i,k,j,1)+N_dust(i,k,j,2)+N_dust(i,k,j,3)+       &
                          N_dust(i,k,j,4)+N_dust(i,k,j,5)                             
             do jjn=1,nbinsa,1
                phin(i,k,j,jjn) = N_dust(i,k,j,jjn)/GNIFA(i,k,j)      !! eq.6 Su&Fung
                !if (wetscav_onoff) wscav(i,k,j,jjn)=tendust(i,k,j)*phin(i,k,j,jjn)*mp_dust(jjn)*dt 
                !chem(i,k,j,bins(jjn))=chem_old(i,k,j,bins(jjn))-wscav(i,k,j,jjn)
             end do
          END SELECT dust_select

       end do
    end do
 end do

end subroutine GNIFA_driver
