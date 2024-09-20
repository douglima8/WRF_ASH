!-----------------------------------------------------------------------------------------
! VOLC coupler
! called in chem_driver (before emission_driver) when ktau=1 AND chem_opt=402,300, etc .... 
! step 1 - only rank-0 read unit 8888
! step 2 - bcast to all processors
!-----------------------------------------------------------------------------------------
 subroutine volc_driver(config_flags,volc_height,volc_onoff,volc_ash,volc_so2,i_etna,j_etna)

 USE module_state_description   ! num_chem, p_qr, ...
 USE module_model_constants     ! rhowater in kg/m3
 USE physconst                  ! rair, ...
 USE module_configure
#ifdef DM_PARALLEL
   USE module_dm
#endif

 implicit none
 TYPE(grid_config_rec_type),INTENT(IN):: config_flags
 INTEGER              :: jtime,jj
 REAL                 :: jtdum,dt,nt
 INTEGER, PARAMETER  :: R4SIZE = 4
 INTEGER, INTENT(OUT) :: i_etna,j_etna
 real, dimension (((config_flags%run_days)*86400)/(config_flags%time_step)) ,INTENT(OUT) ::    & 
                                                                               volc_height,      &
                                                                               volc_onoff,       &
                                                                               volc_ash,         &
                                                                               volc_so2 
#ifdef DM_PARALLEL
 LOGICAL,EXTERNAL     :: wrf_dm_on_monitor
#endif
#define DM_BCAST_MACRO(A) CALL wrf_dm_bcast_bytes(A, size(A)*R4SIZE)

volc_height  = 0.00
volc_onoff   = 0.00
volc_ash     = 0.00
volc_so2     = 0.00
 
#ifdef DM_PARALLEL
 dt=config_flags%time_step
 nt=(config_flags%run_days)*24*3600/dt

 IF ( wrf_dm_on_monitor() ) THEN                    !!! ... read lookup vectors only rank-0
      open(8888,file="etna_2013_wrfchem.dat")
      read(8888,*)i_etna,j_etna
      do jtime=1,nt,1
         read(8888,*)jtdum,volc_onoff(jtime),volc_height(jtime),volc_ash(jtime),volc_so2(jtime)
      end do
 ENDIF

 CALL wrf_dm_bcast_integer (nt,1 )           !! nt-records lookup vectors 
 CALL wrf_dm_bcast_integer (i_etna,1 )       !! bcast i-etna position        
 CALL wrf_dm_bcast_integer (j_etna,1 )       !! bcast i-etna position        
 DM_BCAST_MACRO(volc_onoff)                  !! bcast lookup-vectors
 DM_BCAST_MACRO(volc_height)
 DM_BCAST_MACRO(volc_ash)
 DM_BCAST_MACRO(volc_so2)
#endif

 write(*,*) "lillo2 ",nt,volc_onoff(1),volc_height(1),volc_ash(1),volc_so2(1)

 return
 end subroutine volc_driver
