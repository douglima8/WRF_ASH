 
============================================================================================== 
 
V3.6.1    
 
Compiling: WRF_EM_CORE  
WRFIO_NCD_LARGE_FILE_SUPPORT=1
 
Linux socrate 3.2.0-27-generic #43-Ubuntu SMP Fri Jul 6 14:25:57 UTC 2012 x86_64 x86_64 x86_64 GNU/Linux
 
GNU Fortran (GCC) 5.2.0
Copyright (C) 2015 Free Software Foundation, Inc.

GNU Fortran comes with NO WARRANTY, to the extent permitted by law.
You may redistribute copies of GNU Fortran
under the terms of the GNU General Public License.
For more information about these matters, see the file named COPYING

 
============================================================================================== 
 
setting parallel make -j 2
make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " ext
make[1]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361"
--------------------------------------
( cd frame ; make -i -r externals )
make[2]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/frame"
( cd /cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90 ; \
          make -j 2 FC="gfortran   -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4 " RANLIB="ranlib" \
          CPP="/lib/cpp -P -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I. -DEM_CORE=1 -DNMM_CORE=0 -DNMM_MAX_DIM=2600 -DCOAMPS_CORE=0 -DDA_CORE=0 -DEXP_CORE=0 -DIWORDSIZE=4 -DDWORDSIZE=8 -DRWORDSIZE=4 -DLWORDSIZE=4 -DNONSTANDARD_SYSTEM_SUBR -DWRF_USE_CLM  -DDM_PARALLEL -DNETCDF -DUSE_ALLOCATABLES -DGRIB1 -DINTIO -DLIMIT_ARGS -DCONFIG_BUF_LEN=65536 -DMAX_DOMAINS_F=21 -DMAX_HISTORY=25 -DNMM_NEST=0 -traditional" AR="ar" ARFLAGS="ru" )
make[3]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90"
make[3]: Nessuna operazione da eseguire per "default".
make[3]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90"
( cd /cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf ; \
          make -j 2 NETCDFPATH="/cantiere/rizza/NETCDF" RANLIB="ranlib" CPP="/lib/cpp -P" \
          CC="gcc" CFLAGS="-w -O3 -c  -DDM_PARALLEL -DMAX_HISTORY=25 -DNMM_CORE=0" \
          FC="gfortran   -O2 -ftree-vectorize -funroll-loops -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4 " TRADFLAG="-traditional" AR="ar" ARFLAGS="ru" )
make[3]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf"
make[3]: Nessuna operazione da eseguire per "all".
make[3]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf"
( cd /cantiere/rizza/WRFCHEM/WRFV361/external/ioapi_share ; \
          make -i -r NATIVE_RWORDSIZE="4" RWORDSIZE="4" AR="ar" ARFLAGS="ru" )
make[3]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/ioapi_share"
make[3]: Nessuna operazione da eseguire per "all".
make[3]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/ioapi_share"
( cd /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share ; \
          make -j 2 CC="gcc" CFLAGS="-w -O3 -c  -DDM_PARALLEL -DMAX_HISTORY=25 -DNMM_CORE=0" RM="rm -f" RANLIB="ranlib" CPP="/lib/cpp -P" \
          FC="gfortran  -I.  -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4  " TRADFLAG="-traditional" AR="ar" ARFLAGS="ru" archive) 
make[3]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share"
make[4]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share"
ar ru ./libio_grib_share.a io_grib_share.o get_region_center.o gridnav.o open_file.o
ranlib ./libio_grib_share.a
make[4]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share"
make[3]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share"
( cd /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1 ; \
          make -j 2 CC="gcc" CFLAGS="-w -O3 -c  -DDM_PARALLEL -DMAX_HISTORY=25 -DNMM_CORE=0" RM="rm -f" RANLIB="ranlib" CPP="/lib/cpp -P" \
          FC="gfortran  -I.  -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4  " TRADFLAG="-traditional" AR="ar" ARFLAGS="ru" archive)
make[3]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1"
        Doing make archive on library subdirectory MEL_grib1
make[4]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/MEL_grib1"
make[5]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/MEL_grib1"
ar ru ../libio_grib1.a FTP_getfile.o apply_bitmap.o display_gribhdr.o gbyte.o grib_dec.o grib_enc.o grib_seek.o gribgetbds.o gribgetbms.o gribgetgds.o gribgetpds.o gribhdr2file.o gribputbds.o gribputgds.o gribputpds.o hdr_print.o init_dec_struct.o init_enc_struct.o init_gribhdr.o init_struct.o ld_dec_lookup.o ld_enc_input.o ld_enc_lookup.o ld_grib_origctrs.o make_default_grbfn.o make_grib_log.o map_lvl.o map_parm.o pack_spatial.o prt_inp_struct.o upd_child_errmsg.o prt_badmsg.o swap.o grib_uthin.o set_bytes.o
ranlib ../libio_grib1.a
make[5]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/MEL_grib1"
make[4]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/MEL_grib1"
        Doing make archive on library subdirectory grib1_util
make[4]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/grib1_util"
make[5]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/grib1_util"
ar ru ../libio_grib1.a alloc_2d.o read_grib.o write_grib.o
ranlib ../libio_grib1.a
make[5]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/grib1_util"
make[4]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/grib1_util"
        Doing make archive on library subdirectory WGRIB
make[4]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/WGRIB"
make[4]: Nessuna operazione da eseguire per "archive".
make[4]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/WGRIB"
make[4]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1"
ar ru ./libio_grib1.a grib1_routines.o gribmap.o io_grib1.o trim.o
ranlib ./libio_grib1.a
make[4]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1"
make[3]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1"
( cd /cantiere/rizza/WRFCHEM/WRFV361/external/io_int ; \
          make -j 2 CC="mpicc -DMPI2_SUPPORT  -DFSEEKO64_OK " RM="rm -f" RANLIB="ranlib" CPP="/lib/cpp -P" \
          FC="mpif90    -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4  " FGREP="fgrep -iq" \
          TRADFLAG="-traditional" AR="ar" ARFLAGS="ru" ARCHFLAGS="-DEM_CORE=1 -DNMM_CORE=0 -DNMM_MAX_DIM=2600 -DCOAMPS_CORE=0 -DDA_CORE=0 -DEXP_CORE=0 -DIWORDSIZE=4 -DDWORDSIZE=8 -DRWORDSIZE=4 -DLWORDSIZE=4 -DNONSTANDARD_SYSTEM_SUBR -DWRF_USE_CLM  -DDM_PARALLEL -DNETCDF -DUSE_ALLOCATABLES -DGRIB1 -DINTIO -DLIMIT_ARGS -DCONFIG_BUF_LEN=65536 -DMAX_DOMAINS_F=21 -DMAX_HISTORY=25 -DNMM_NEST=0" all )
make[3]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_int"
make[3]: Nessuna operazione da eseguire per "all".
make[3]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_int"
( cd /cantiere/rizza/WRFCHEM/WRFV361/external/fftpack/fftpack5 ; \
          make -j 2 FC="gfortran" FFLAGS="  -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4 " RANLIB="ranlib" AR="ar" \
          ARFLAGS="ru" CPP="/lib/cpp -P" CPPFLAGS="-DEM_CORE=1 -DNMM_CORE=0 -DNMM_MAX_DIM=2600 -DCOAMPS_CORE=0 -DDA_CORE=0 -DEXP_CORE=0 -DIWORDSIZE=4 -DDWORDSIZE=8 -DRWORDSIZE=4 -DLWORDSIZE=4 -DNONSTANDARD_SYSTEM_SUBR -DWRF_USE_CLM  -DDM_PARALLEL -DNETCDF -DUSE_ALLOCATABLES -DGRIB1 -DINTIO -DLIMIT_ARGS -DCONFIG_BUF_LEN=65536 -DMAX_DOMAINS_F=21 -DMAX_HISTORY=25 -DNMM_NEST=0 -DWRF_CHEM -DBUILD_CHEM=1 -I. -traditional " RM="rm -f" )
make[3]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/fftpack/fftpack5"
ar ru libfftpack.a c1f2kb.o  cfft1b.o  cmf3kf.o  cosqb1.o  costmi.o   dcosq1f.o  dfftb1.o   mradb2.o  mrfti1.o  r1fgkf.o     rfft2i.o  sinqmi.o  z1f2kf.o  zfft1f.o  zmf4kb.o c1f2kf.o  cfft1f.o  cmf4kb.o  cosqf1.o  d1f2kb.o   dcosq1i.o  dfftf1.o   mradb3.o  msntb1.o  r4_factor.o  rfftb1.o  sint1b.o  z1f3kb.o  zfft1i.o  zmf4kf.o c1f3kb.o  cfft1i.o  cmf4kf.o  cosqmb.o  d1f2kf.o   dcosqb1.o  dffti1.o   mradb4.o  msntf1.o  r4_mcfti1.o  rfftf1.o  sint1f.o  z1f3kf.o  zfft2b.o  zmf5kb.o c1f3kf.o  cfft2b.o  cmf5kb.o  cosqmf.o  d1f3kb.o   dcosqf1.o  dsint1b.o  mradb5.o  r1f2kb.o  r4_tables.o  rffti1.o  sint1i.o  z1f4kb.o  zfft2f.o  zmf5kf.o c1f4kb.o  cfft2f.o  cmf5kf.o  cosqmi.o  d1f3kf.o   dcost1b.o  dsint1f.o  mradbg.o  r1f2kf.o  r8_factor.o  rfftmb.o  sintb1.o  z1f4kf.o  zfft2i.o  zmfgkb.o c1f4kf.o  cfft2i.o  cmfgkb.o  cost1b.o  d1f4kb.o   dcost1f.o  dsint1i.o  mradf2.o  r1f3kb.o  r8_mcfti1.o  rfftmf.o  sintf1.o  z1f5kb.o  zfftmb.o  zmfgkf.o c1f5kb.o  cfftmb.o  cmfgkf.o  cost1f.o  d1f4kf.o   dcost1i.o  dsintb1.o  mradf3.o  r1f3kf.o  r8_tables.o  rfftmi.o  sintmb.o  z1f5kf.o  zfftmf.o  zmfm1b.o c1f5kf.o  cfftmf.o  cmfm1b.o  cost1i.o  d1f5kb.o   dcostb1.o  dsintf1.o  mradf4.o  r1f4kb.o  rfft1b.o     sinq1b.o  sintmf.o  z1fgkb.o  zfftmi.o  zmfm1f.o c1fgkb.o  cfftmi.o  cmfm1f.o  costb1.o  d1f5kf.o   dcostf1.o  mcsqb1.o   mradf5.o  r1f4kf.o  rfft1f.o     sinq1f.o  sintmi.o  z1fgkf.o  zmf2kb.o c1fgkf.o  cmf2kb.o  cosq1b.o  costf1.o  d1fgkb.o   dfft1b.o   mcsqf1.o   mradfg.o  r1f5kb.o  rfft1i.o     sinq1i.o  xercon.o  z1fm1b.o  zmf2kf.o c1fm1b.o  cmf2kf.o  cosq1f.o  costmb.o  d1fgkf.o   dfft1f.o   mcstb1.o   mrftb1.o  r1f5kf.o  rfft2b.o     sinqmb.o  xerfft.o  z1fm1f.o  zmf3kb.o c1fm1f.o  cmf3kb.o  cosq1i.o  costmf.o  dcosq1b.o  dfft1i.o   mcstf1.o   mrftf1.o  r1fgkb.o  rfft2f.o     sinqmf.o  z1f2kb.o  zfft1b.o  zmf3kf.o 
ranlib libfftpack.a
make[3]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/fftpack/fftpack5"
( if [ ! -e /cantiere/rizza/WRFCHEM/WRFV361/tools/gen_comms.c ] ; then \
          /bin/cp /cantiere/rizza/WRFCHEM/WRFV361/tools/gen_comms_warning /cantiere/rizza/WRFCHEM/WRFV361/tools/gen_comms.c ; \
          cat /cantiere/rizza/WRFCHEM/WRFV361/external/RSL_LITE/gen_comms.c >> /cantiere/rizza/WRFCHEM/WRFV361/tools/gen_comms.c ; fi )
( if [ ! -e module_dm.F ] ; then /bin/cp module_dm_warning module_dm.F ; \
          cat /cantiere/rizza/WRFCHEM/WRFV361/external/RSL_LITE/module_dm.F >> module_dm.F ; fi )
make[2]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/frame"
make[1]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361"
make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " toolsdir
make[1]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361"
--------------------------------------
( cd tools ; make -i -r CC_TOOLS_CFLAGS="-DNMM_CORE=0" CC_TOOLS="gcc  -DIWORDSIZE=4 -DMAX_HISTORY=25" )
make[2]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/tools"
make[2]: "registry" è aggiornato.
make[2]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/tools"
make[1]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361"
/bin/rm -f main/libwrflib.a main/libwrflib.lib
make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " framework
make[1]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361"
--------------------------------------
( cd frame ; make -i -r -j 2 framework; \
          cd ../external/io_netcdf ; \
          make -i -r NETCDFPATH="/cantiere/rizza/NETCDF" FC="gfortran -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4 " RANLIB="ranlib" \
               CPP="/lib/cpp -P" LDFLAGS=" -O2 -ftree-vectorize -funroll-loops -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4   " TRADFLAG="-traditional" ESMF_IO_LIB_EXT="-L/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90 -lesmf_time" \
	       LIB_LOCAL="" \
               ESMF_MOD_DEPENDENCE="/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90/module_utility.o" AR="INTERNAL_BUILD_ERROR_SHOULD_NOT_NEED_AR" diffwrf; \
          cd ../io_int ; \
          make -i -r SFC="gfortran -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4 " FC="gfortran -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4 " RANLIB="ranlib" CPP="/lib/cpp -P -DNONSTANDARD_SYSTEM_SUBR -DWRF_USE_CLM" DM_FC="mpif90  -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4 "\
               TRADFLAG="-traditional" ESMF_IO_LIB_EXT="-L/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90 -lesmf_time" \
               ESMF_MOD_DEPENDENCE="/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90/module_utility.o" AR="INTERNAL_BUILD_ERROR_SHOULD_NOT_NEED_AR" diffwrf ; \
          cd ../../frame )
make[2]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/frame"
ar ru ../main/libwrflib.a module_driver_constants.o module_domain_type.o module_streams.o module_domain.o module_integrate.o module_timing.o module_configure.o module_tiles.o module_machine.o module_nesting.o module_wrf_error.o module_state_description.o module_sm.o module_io.o module_comm_dm.o module_comm_dm_0.o module_comm_dm_1.o module_comm_dm_2.o module_comm_dm_3.o module_comm_dm_4.o module_comm_nesting_dm.o module_dm.o module_quilt_outbuf_ops.o module_io_quilt.o module_intermediate_nmm.o module_cpl.o module_cpl_oasis3.o wrf_num_bytes_between.o wrf_shutdown.o wrf_debug.o libmassv.o collect_on_comm.o hires_timer.o clog.o nl_get_0_routines.o nl_get_1_routines.o nl_get_2_routines.o nl_get_3_routines.o nl_get_4_routines.o nl_get_5_routines.o nl_get_6_routines.o nl_get_7_routines.o nl_set_0_routines.o nl_set_1_routines.o nl_set_2_routines.o nl_set_3_routines.o nl_set_4_routines.o nl_set_5_routines.o nl_set_6_routines.o nl_set_7_routines.o  module_alloc_space_0.o module_alloc_space_1.o module_alloc_space_2.o module_alloc_space_3.o module_alloc_space_4.o module_alloc_space_5.o module_alloc_space_6.o module_alloc_space_7.o module_alloc_space_8.o module_alloc_space_9.o
ar: creating ../main/libwrflib.a
ranlib ../main/libwrflib.a
make[2]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/frame"
make[2]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf"
make[2]: "diffwrf" è aggiornato.
make[2]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf"
make[2]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_int"
make[2]: "diffwrf" è aggiornato.
make[2]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/external/io_int"
make[1]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361"
make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " shared
make[1]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361"
--------------------------------------
if [ "`echo -j 2 | sed -e 's/-j//g' -e 's/ \+//g'`" -gt "6" ] ; then \
	  ( cd share ; make -i -r -j 6 ) ;  \
	else \
	  ( cd share ; make -i -r -j 2 ) ;  \
	fi
make[2]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/share"
if [ 0 -eq 1 ] ; then \
                  make -i -r nmm_contrib                                      ; \
                  ar ru ../main/libwrflib.a module_model_constants.o module_bc_time_utilities.o module_get_file_names.o module_compute_geop.o module_check_a_mundo.o module_random.o module_llxy.o module_interp_nmm.o module_interp_store.o module_MPP.o  module_date_time.o module_bc.o module_io_wrf.o module_soil_pre.o  module_io_domain.o               module_optional_input.o          solve_interface.o mediation_interp_domain.o mediation_force_domain.o mediation_feedback_domain.o start_domain.o init_modules.o set_timekeeping.o interp_fcn.o sint.o wrf_ext_write_field.o wrf_ext_read_field.o  wrf_tsin.o landread.o track_driver.o track_input.o bobrand.o wrf_timeseries.o track_driver.o wrf_fddaobs_in.o mediation_nest_move.o setfeenv.o input_wrf.o output_wrf.o wrf_bdyout.o wrf_bdyin.o dfi.o mediation_integrate.o mediation_wrfmain.o    ; \
                  else                                                         \
                  ar ru ../main/libwrflib.a module_model_constants.o module_bc_time_utilities.o module_get_file_names.o module_compute_geop.o module_check_a_mundo.o module_random.o module_llxy.o module_interp_nmm.o module_interp_store.o module_MPP.o  module_date_time.o module_bc.o module_io_wrf.o module_soil_pre.o  module_io_domain.o               module_optional_input.o          solve_interface.o mediation_interp_domain.o mediation_force_domain.o mediation_feedback_domain.o start_domain.o init_modules.o set_timekeeping.o interp_fcn.o sint.o wrf_ext_write_field.o wrf_ext_read_field.o  wrf_tsin.o landread.o track_driver.o track_input.o bobrand.o wrf_timeseries.o track_driver.o wrf_fddaobs_in.o mediation_nest_move.o setfeenv.o input_wrf.o output_wrf.o wrf_bdyout.o wrf_bdyin.o dfi.o mediation_integrate.o mediation_wrfmain.o              ; \
                fi
make[2]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/share"
make[1]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361"
make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " physics
make[1]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361"
--------------------------------------
( cd phys ; make -i -r )
make[2]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/phys"
if [ 0 -eq 1 ] ; then \
                  make -i -r -j 2 nmm_contrib  ; \
                  ar ru ../main/libwrflib.a module_cam_shr_kind_mod.o module_cam_support.o module_cam_shr_const_mod.o module_cam_physconst.o module_cam_cldwat.o module_cam_wv_saturation.o module_cam_esinti.o module_cam_gffgch.o module_cam_error_function.o module_cam_constituents.o module_cam_trb_mtn_stress.o module_cam_molec_diff.o module_cam_upper_bc.o module_cam_bl_diffusion_solver.o module_cam_bl_eddy_diff.o module_cam_mp_microp_aero.o module_cam_mp_cldwat2m_micro.o module_cam_mp_ndrop.o module_cam_mp_modal_aero_initialize_data_phys.o module_cam_mp_radconstants.o module_cam_mp_conv_water.o module_cam_mp_qneg3.o module_data_cam_mam_aero.o module_data_cam_mam_asect.o module_cam_infnan.o module_bl_ysu.o module_bl_mrf.o module_bl_gfs.o module_bl_gfs2011.o module_bl_myjpbl.o module_bl_qnsepbl.o module_bl_qnsepbl09.o module_bl_acm.o module_bl_mynn.o module_bl_fogdes.o module_bl_gwdo.o module_bl_myjurb.o module_bl_boulac.o module_bl_camuwpbl_driver.o module_bl_mfshconvpbl.o module_shcu_camuwshcu_driver.o module_shcu_camuwshcu.o module_shcu_grims.o module_cu_camzm_driver.o module_cu_camzm.o module_bl_temf.o module_bl_gbmpbl.o module_cu_g3.o module_cu_kf.o module_cu_bmj.o module_cu_kfeta.o module_cu_tiedtke.o module_cu_gd.o module_cu_gf.o module_cu_nsas.o module_cu_sas.o module_cu_mesosas.o module_cu_osas.o module_mp_radar.o module_mp_kessler.o module_mp_lin.o module_mp_sbu_ylin.o module_mp_wsm3.o module_mp_wsm5.o module_mp_wsm6.o module_mp_etanew.o module_mp_etaold.o module_mp_HWRF.o module_mp_thompson.o module_mp_full_sbm.o module_mp_fast_sbm.o module_ltng_lpi.o module_mp_gsfcgce.o module_mp_morr_two_moment.o module_mp_milbrandt2mom.o module_mp_nssl_2mom.o module_mp_wdm5.o module_mp_wdm6.o module_mp_cammgmp_driver.o module_ra_sw.o module_ra_clWRF_support.o module_ra_gsfcsw.o module_ra_goddard.o module_ra_rrtm.o module_ra_rrtmg_lw.o module_ra_rrtmg_sw.o module_ra_cam_support.o module_ra_cam.o module_ra_gfdleta.o module_ra_flg.o module_ra_HWRF.o module_ra_hs.o module_ra_aerosol.o module_sf_sfclay.o module_sf_sfclayrev.o module_sf_gfs.o module_sf_gfdl.o module_sf_slab.o module_sf_noahdrv.o module_sf_noahlsm.o module_sf_clm.o module_sf_ssib.o module_sf_noah_seaice.o module_sf_noah_seaice_drv.o module_sf_noahlsm_glacial_only.o module_sf_noahmp_groundwater.o module_sf_noahmpdrv.o module_sf_noahmplsm.o module_sf_noahmp_glacier.o module_sf_urban.o module_sf_bep.o module_sf_bep_bem.o module_sf_bem.o module_sf_pxlsm.o module_sf_pxlsm_data.o module_sf_ruclsm.o module_sf_sfcdiags.o module_sf_sfcdiags_ruclsm.o module_sf_sstskin.o module_sf_tmnupdate.o module_sf_ocean_driver.o module_sf_oml.o module_sf_3dpwp.o module_sf_myjsfc.o module_sf_qnsesfc.o module_sf_mynn.o module_sf_fogdes.o module_sf_pxsfclay.o module_sf_temfsfclay.o module_sf_idealscmsfclay.o module_sf_scmflux.o module_sf_scmskintemp.o module_physics_addtendc.o module_physics_init.o module_gfs_machine.o module_gfs_funcphys.o module_gfs_physcons.o module_progtm.o module_pbl_driver.o module_data_gocart_dust.o module_cumulus_driver.o module_shallowcu_driver.o module_microphysics_driver.o module_microphysics_zero_out.o module_mixactivate.o module_radiation_driver.o module_surface_driver.o module_lightning_driver.o module_ltng_cpmpr92z.o module_ltng_crmpr92.o module_ltng_iccg.o module_fdda_psufddagd.o module_fdda_spnudging.o module_fddagd_driver.o module_fddaobs_rtfdda.o module_fddaobs_driver.o module_wind_fitch.o module_sf_lake.o module_diagnostics_driver.o  \
                                     \
                                   module_diag_refl.o ; \
                else                                                         \
                  make -i -r -j 2 non_nmm      ; \
                  ar ru ../main/libwrflib.a module_cam_shr_kind_mod.o module_cam_support.o module_cam_shr_const_mod.o module_cam_physconst.o module_cam_cldwat.o module_cam_wv_saturation.o module_cam_esinti.o module_cam_gffgch.o module_cam_error_function.o module_cam_constituents.o module_cam_trb_mtn_stress.o module_cam_molec_diff.o module_cam_upper_bc.o module_cam_bl_diffusion_solver.o module_cam_bl_eddy_diff.o module_cam_mp_microp_aero.o module_cam_mp_cldwat2m_micro.o module_cam_mp_ndrop.o module_cam_mp_modal_aero_initialize_data_phys.o module_cam_mp_radconstants.o module_cam_mp_conv_water.o module_cam_mp_qneg3.o module_data_cam_mam_aero.o module_data_cam_mam_asect.o module_cam_infnan.o module_bl_ysu.o module_bl_mrf.o module_bl_gfs.o module_bl_gfs2011.o module_bl_myjpbl.o module_bl_qnsepbl.o module_bl_qnsepbl09.o module_bl_acm.o module_bl_mynn.o module_bl_fogdes.o module_bl_gwdo.o module_bl_myjurb.o module_bl_boulac.o module_bl_camuwpbl_driver.o module_bl_mfshconvpbl.o module_shcu_camuwshcu_driver.o module_shcu_camuwshcu.o module_shcu_grims.o module_cu_camzm_driver.o module_cu_camzm.o module_bl_temf.o module_bl_gbmpbl.o module_cu_g3.o module_cu_kf.o module_cu_bmj.o module_cu_kfeta.o module_cu_tiedtke.o module_cu_gd.o module_cu_gf.o module_cu_nsas.o module_cu_sas.o module_cu_mesosas.o module_cu_osas.o module_mp_radar.o module_mp_kessler.o module_mp_lin.o module_mp_sbu_ylin.o module_mp_wsm3.o module_mp_wsm5.o module_mp_wsm6.o module_mp_etanew.o module_mp_etaold.o module_mp_HWRF.o module_mp_thompson.o module_mp_full_sbm.o module_mp_fast_sbm.o module_ltng_lpi.o module_mp_gsfcgce.o module_mp_morr_two_moment.o module_mp_milbrandt2mom.o module_mp_nssl_2mom.o module_mp_wdm5.o module_mp_wdm6.o module_mp_cammgmp_driver.o module_ra_sw.o module_ra_clWRF_support.o module_ra_gsfcsw.o module_ra_goddard.o module_ra_rrtm.o module_ra_rrtmg_lw.o module_ra_rrtmg_sw.o module_ra_cam_support.o module_ra_cam.o module_ra_gfdleta.o module_ra_flg.o module_ra_HWRF.o module_ra_hs.o module_ra_aerosol.o module_sf_sfclay.o module_sf_sfclayrev.o module_sf_gfs.o module_sf_gfdl.o module_sf_slab.o module_sf_noahdrv.o module_sf_noahlsm.o module_sf_clm.o module_sf_ssib.o module_sf_noah_seaice.o module_sf_noah_seaice_drv.o module_sf_noahlsm_glacial_only.o module_sf_noahmp_groundwater.o module_sf_noahmpdrv.o module_sf_noahmplsm.o module_sf_noahmp_glacier.o module_sf_urban.o module_sf_bep.o module_sf_bep_bem.o module_sf_bem.o module_sf_pxlsm.o module_sf_pxlsm_data.o module_sf_ruclsm.o module_sf_sfcdiags.o module_sf_sfcdiags_ruclsm.o module_sf_sstskin.o module_sf_tmnupdate.o module_sf_ocean_driver.o module_sf_oml.o module_sf_3dpwp.o module_sf_myjsfc.o module_sf_qnsesfc.o module_sf_mynn.o module_sf_fogdes.o module_sf_pxsfclay.o module_sf_temfsfclay.o module_sf_idealscmsfclay.o module_sf_scmflux.o module_sf_scmskintemp.o module_physics_addtendc.o module_physics_init.o module_gfs_machine.o module_gfs_funcphys.o module_gfs_physcons.o module_progtm.o module_pbl_driver.o module_data_gocart_dust.o module_cumulus_driver.o module_shallowcu_driver.o module_microphysics_driver.o module_microphysics_zero_out.o module_mixactivate.o module_radiation_driver.o module_surface_driver.o module_lightning_driver.o module_ltng_cpmpr92z.o module_ltng_crmpr92.o module_ltng_iccg.o module_fdda_psufddagd.o module_fdda_spnudging.o module_fddagd_driver.o module_fddaobs_rtfdda.o module_fddaobs_driver.o module_wind_fitch.o module_sf_lake.o module_diagnostics_driver.o  \
                                   module_fr_fire_driver.o module_fr_fire_driver_wrf.o module_fr_fire_atm.o module_fr_fire_model.o module_fr_fire_core.o module_fr_fire_phys.o module_fr_fire_util.o \
                                   module_diag_afwa.o module_diag_afwa_hail.o module_diag_cl.o module_diag_misc.o module_diag_pld.o  ; \
                fi
make[3]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/phys"
make[3]: Nessuna operazione da eseguire per "non_nmm".
make[3]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/phys"
make[2]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/phys"
make[1]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361"
if [ 1  -eq 1 ]    ; then make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " chemics ; fi
make[1]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361"
--------------------------------------
if [ 0 -eq 1 ] ; then ( cd chem ; make -i -r ) ; fi
if [ 0 -eq 0 ] ; then \
	  if  [ "`echo -j 2 | sed -e 's/-j//g' -e 's/ \+//g'`" -gt "16" ] ; then \
	    ( cd chem ; make -i -r -j 16 ) ;  \
	  else \
	    ( cd chem ; make -i -r -j 2 ) ; \
	  fi \
	fi
make[2]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/chem"
rm -f module_gocart_seasalt_urix.o
make[2]: Dipendenza circolare module_cam_mam_init.o <- module_cam_mam_initmixrats.o scartata.
make[2]: Dipendenza circolare module_cam_mam_mo_sethet.o <- module_cam_mam_init.o scartata.
/lib/cpp -P -I/cantiere/rizza/WRFCHEM/WRFV361/inc -DEM_CORE=1 -DNMM_CORE=0 -DNMM_MAX_DIM=2600 -DCOAMPS_CORE=0 -DDA_CORE=0 -DEXP_CORE=0 -DIWORDSIZE=4 -DDWORDSIZE=8 -DRWORDSIZE=4 -DLWORDSIZE=4 -DNONSTANDARD_SYSTEM_SUBR -DWRF_USE_CLM  -DDM_PARALLEL -DNETCDF -DUSE_ALLOCATABLES -DGRIB1 -DINTIO -DLIMIT_ARGS -DCONFIG_BUF_LEN=65536 -DMAX_DOMAINS_F=21 -DMAX_HISTORY=25 -DNMM_NEST=0 -DWRF_CHEM -DBUILD_CHEM=1 -I. -traditional   module_gocart_seasalt_urix.F  > module_gocart_seasalt_urix.bb
/cantiere/rizza/WRFCHEM/WRFV361/tools/standard.exe module_gocart_seasalt_urix.bb | /lib/cpp -P -traditional > module_gocart_seasalt_urix.f90
rm -f module_gocart_seasalt_urix.b module_gocart_seasalt_urix.bb
mpif90  -o module_gocart_seasalt_urix.o -c -O2 -ftree-vectorize -funroll-loops -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4   -I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include    module_gocart_seasalt_urix.f90
module_gocart_seasalt_urix.f90:507:39:

   real, parameter   :: visc_air=15.11*D-6             
                                       1
Error: Symbol ‘d’ at (1) has no IMPLICIT type
module_gocart_seasalt_urix.f90:566:25:

             dfn = 1.41*10**13*RB**1.5/r_w**(8)
                         1
Error: Arithmetic overflow at (1)
module_gocart_seasalt_urix.f90:558:37:

         RB=ustar_wam**3*beta/visc_air/9.81
                                     1
Error: Symbol ‘visc_air’ at (1) has no IMPLICIT type
module_gocart_seasalt_urix.f90:560:12:

             dfn = 1.43/10**3*RB**1.5/r_w**(0.5)
            1
Error: Incompatible ranks 0 and 1 in assignment at (1)
module_gocart_seasalt_urix.f90:562:12:

             dfn = 7.84/10**3*RB**1.5/r_w
            1
Error: Incompatible ranks 0 and 1 in assignment at (1)
module_gocart_seasalt_urix.f90:564:12:

             dfn = 4.41*10*RB**1.5/r_w**(3.0)
            1
Error: Incompatible ranks 0 and 1 in assignment at (1)
make[2]: [module_gocart_seasalt_urix.o] Errore 1 (ignorato)
ar ru ../main/libwrflib.a module_aer_opt_out.o module_add_emiss_burn.o module_add_emis_cptec.o module_bioemi_beis314.o module_chem_utilities.o module_cmu_dvode_solver.o module_ctrans_aqchem.o module_data_cbmz.o module_data_cmu_bulkaqchem.o module_data_gocartchem.o module_data_gocart_seas.o module_data_mosaic_asect.o module_data_mosaic_other.o module_data_mosaic_therm.o module_data_radm2.o module_data_rrtmgaeropt.o module_data_megan2.o module_data_soa_vbs.o module_data_sorgam.o module_ftuv_subs.o module_ghg_fluxes.o module_gocart_drydep.o module_gocart_settling.o module_gocart_so2so4.o module_input_tracer_data.o module_interpolate.o module_mosaic_csuesat.o module_mozcart_wetscav.o module_peg_util.o module_tropopause.o module_upper_bc_driver.o module_vertmx_wrf.o module_wave_data.o module_wetdep_ls_urix.o module_zero_plumegen_coms.o module_vash_settling.o module_chem_plumerise_scalar.o module_dep_simple.o module_gocart_dmsemis.o module_gocart_aerosols.o module_gocart_dust.o module_gocart_dust_afwa.o module_gocart_seasalt_urix.o module_uoc_dust.o module_qf03_urix.o module_soilpsd.o module_dust_load.o module_mosaic_addemiss.o module_mosaic_initmixrats.o module_mosaic_movesect.o module_mosaic_newnuc.o module_cbmz_lsodes_solver.o module_cbmz_rodas3_solver.o module_cmu_bulkaqchem.o module_data_mgn2mech.o module_ftuv_driver.o module_fastj_data.o module_fastj_mie.o module_input_chem_data.o module_mosaic_coag.o module_mosaic_gly.o module_mosaic_wetscav.o module_mosaic_therm.o module_phot_mad.o module_radm.o module_sorgam_aqchem.o module_aerosols_soa_vbs.o module_aerosols_sorgam.o module_bioemi_megan2.o module_bioemi_simple.o module_cbm4_initmixrats.o module_cbmz.o module_cbmz_initmixrats.o module_cbmz_rodas_prep.o module_ctrans_grell.o module_gocart_chem.o module_input_tracer.o module_lightning_nox_driver.o module_lightning_nox_ott.o module_lightning_nox_decaria.o module_mixactivate_wrappers.o module_mosaic_driver.o module_optical_averaging.o module_plumerise1.o module_mosaic_drydep.o module_wetscav_driver.o module_input_chem_bioemiss.o module_input_dust_errosion.o module_input_gocart_dms.o module_cbmz_addemiss.o module_cbm4_addemiss.o module_emissions_anthropogenics.o module_aer_drydep.o module_cam_mam_calcsize.o module_cam_mam_dust_sediment.o module_cam_mam_drydep.o module_cam_mam_init.o module_cam_mam_initaerodata.o module_cam_mam_initmixrats.o module_cam_mam_rename.o module_cam_mam_wateruptake.o module_cam_mam_gasaerexch.o module_cam_mam_coag.o module_cam_mam_newnuc.o module_cam_mam_aerchem_driver.o module_cam_mam_addemiss.o module_cam_mam_wetscav.o module_cam_mam_mz_aerosols_intr.o module_cam_mam_wetdep.o module_cam_mam_cloudchem.o module_cam_mam_setsox.o module_cam_mam_mo_chem_utls.o module_mosaic_cloudchem.o module_sorgam_cloudchem.o module_cam_mam_gas_wetdep_driver.o module_cam_mam_mo_sethet.o module_phot_fastj.o chemics_init.o chem_driver.o cloudchem_driver.o photolysis_driver.o optical_driver.o mechanism_driver.o emissions_driver.o dry_dep_driver.o aerosol_driver.o 
ar: module_gocart_seasalt_urix.o: No such file or directory
make[2]: [chemics] Errore 1 (ignorato)
make[2]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/chem"
make[1]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361"
if [ 1 -eq 1 ]    ; then make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " em_core ; fi
make[1]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361"
--------------------------------------
if [ 1  -eq 0 ] ; then \
		CF= ; \
	else \
		CF="../chem/module_aerosols_sorgam.o ../chem/module_gocart_aerosols.o ../chem/module_mosaic_driver.o ../chem/module_input_tracer.o ../chem/module_aerosols_soa_vbs.o" ; \
	fi
( cd dyn_em ; make -i -r -j 2 CF="" )
make[2]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/dyn_em"
ar ru ../main/libwrflib.a module_advect_em.o module_diffusion_em.o module_small_step_em.o module_big_step_utilities_em.o module_em.o module_solvedebug_em.o module_bc_em.o module_init_utilities.o module_wps_io_arw.o module_damping_em.o module_polarfft.o module_force_scm.o module_first_rk_step_part1.o module_first_rk_step_part2.o module_avgflx_em.o module_sfs_nba.o module_convtrans_prep.o module_sfs_driver.o module_stoch.o module_after_all_rk_steps.o  init_modules_em.o solve_em.o start_em.o shift_domain_em.o couple_or_uncouple_em.o nest_init_utils.o adapt_timestep_em.o interp_domain_em.o
make[2]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/dyn_em"
make[1]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361"
if [ 0 -eq 1 ]   ; then make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " nmm_core ; fi
if [ 0 -eq 1 ]   ; then make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " exp_core ; fi
if [ 0 -eq 1 ]   ; then make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " wrf_hydro ; fi
( cd main ; make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " SOLVER=em em_wrf )
make[1]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/main"
ranlib libwrflib.a
mpif90  -o wrf.exe  -O2 -ftree-vectorize -funroll-loops -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4    wrf.o ../main/module_wrf_top.o libwrflib.a /cantiere/rizza/WRFCHEM/WRFV361/external/fftpack/fftpack5/libfftpack.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/libio_grib1.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share/libio_grib_share.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_int/libwrfio_int.a -L/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90 -lesmf_time /cantiere/rizza/WRFCHEM/WRFV361/external/RSL_LITE/librsl_lite.a /cantiere/rizza/WRFCHEM/WRFV361/frame/module_internal_header_util.o /cantiere/rizza/WRFCHEM/WRFV361/frame/pack_utils.o  -L/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -lwrfio_nf -L/cantiere/rizza/NETCDF/lib -lnetcdff -lnetcdf      
libwrflib.a(solve_em.o): In function `solve_em_':
solve_em.f90:(.text+0x159d2): undefined reference to `__module_input_tracer_MOD_flow_dep_bdy_tracer'
solve_em.f90:(.text+0x16211): undefined reference to `__module_input_chem_data_MOD_flow_dep_bdy_chem'
libwrflib.a(solve_interface.o): In function `solve_interface_':
solve_interface.f90:(.text+0x2984): undefined reference to `chem_driver_'
libwrflib.a(start_em.o): In function `start_domain_em_':
start_em.f90:(.text+0x1a881): undefined reference to `__module_input_tracer_MOD_initialize_tracer'
start_em.f90:(.text+0x1b958): undefined reference to `chem_init_'
start_em.f90:(.text+0x1cf06): undefined reference to `__module_gocart_aerosols_MOD_sum_pm_gocart'
start_em.f90:(.text+0x1d169): undefined reference to `__module_aerosols_sorgam_MOD_sum_pm_sorgam'
start_em.f90:(.text+0x1d45e): undefined reference to `__module_aerosols_soa_vbs_MOD_sum_pm_soa_vbs'
start_em.f90:(.text+0x1d708): undefined reference to `__module_mosaic_driver_MOD_sum_pm_mosaic'
collect2: error: ld returned 1 exit status
make[1]: [em_wrf] Errore 1 (ignorato)
make[1]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/main"
( cd run ; /bin/rm -f wrf.exe ; ln -s ../main/wrf.exe . )
if [ 0 -eq 1 ] ; then \
	  ( cd main ; make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " SOLVER=em em_wrf_SST_ESMF ) ; \
	fi
build started:   mer 30 ago 2017, 17.35.56, CEST
build completed: mer 30 ago 2017, 17.36.02, CEST
--------------------------------------
( cd main ; make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " SOLVER=em IDEAL_CASE=real em_real )
make[1]: ingresso nella directory "/cantiere/rizza/WRFCHEM/WRFV361/main"
ranlib libwrflib.a
mpif90  -o ndown.exe  -O2 -ftree-vectorize -funroll-loops -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4    ndown_em.o  ../dyn_em/module_initialize_real.o libwrflib.a /cantiere/rizza/WRFCHEM/WRFV361/external/fftpack/fftpack5/libfftpack.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/libio_grib1.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share/libio_grib_share.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_int/libwrfio_int.a -L/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90 -lesmf_time /cantiere/rizza/WRFCHEM/WRFV361/external/RSL_LITE/librsl_lite.a /cantiere/rizza/WRFCHEM/WRFV361/frame/module_internal_header_util.o /cantiere/rizza/WRFCHEM/WRFV361/frame/pack_utils.o  -L/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -lwrfio_nf -L/cantiere/rizza/NETCDF/lib -lnetcdff -lnetcdf      
libwrflib.a(start_em.o): In function `start_domain_em_':
start_em.f90:(.text+0x1a881): undefined reference to `__module_input_tracer_MOD_initialize_tracer'
start_em.f90:(.text+0x1b958): undefined reference to `chem_init_'
start_em.f90:(.text+0x1cf06): undefined reference to `__module_gocart_aerosols_MOD_sum_pm_gocart'
start_em.f90:(.text+0x1d169): undefined reference to `__module_aerosols_sorgam_MOD_sum_pm_sorgam'
start_em.f90:(.text+0x1d45e): undefined reference to `__module_aerosols_soa_vbs_MOD_sum_pm_soa_vbs'
start_em.f90:(.text+0x1d708): undefined reference to `__module_mosaic_driver_MOD_sum_pm_mosaic'
collect2: error: ld returned 1 exit status
make[1]: [em_real] Errore 1 (ignorato)
mpif90  -o nup.exe  -O2 -ftree-vectorize -funroll-loops -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4    nup_em.o  ../dyn_em/module_initialize_real.o libwrflib.a /cantiere/rizza/WRFCHEM/WRFV361/external/fftpack/fftpack5/libfftpack.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/libio_grib1.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share/libio_grib_share.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_int/libwrfio_int.a -L/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90 -lesmf_time /cantiere/rizza/WRFCHEM/WRFV361/external/RSL_LITE/librsl_lite.a /cantiere/rizza/WRFCHEM/WRFV361/frame/module_internal_header_util.o /cantiere/rizza/WRFCHEM/WRFV361/frame/pack_utils.o  -L/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -lwrfio_nf -L/cantiere/rizza/NETCDF/lib -lnetcdff -lnetcdf      
libwrflib.a(start_em.o): In function `start_domain_em_':
start_em.f90:(.text+0x1a881): undefined reference to `__module_input_tracer_MOD_initialize_tracer'
start_em.f90:(.text+0x1b958): undefined reference to `chem_init_'
start_em.f90:(.text+0x1cf06): undefined reference to `__module_gocart_aerosols_MOD_sum_pm_gocart'
start_em.f90:(.text+0x1d169): undefined reference to `__module_aerosols_sorgam_MOD_sum_pm_sorgam'
start_em.f90:(.text+0x1d45e): undefined reference to `__module_aerosols_soa_vbs_MOD_sum_pm_soa_vbs'
start_em.f90:(.text+0x1d708): undefined reference to `__module_mosaic_driver_MOD_sum_pm_mosaic'
collect2: error: ld returned 1 exit status
make[1]: [em_real] Errore 1 (ignorato)
mpif90  -o tc.exe  -O2 -ftree-vectorize -funroll-loops -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4    tc_em.o  ../dyn_em/module_initialize_real.o libwrflib.a /cantiere/rizza/WRFCHEM/WRFV361/external/fftpack/fftpack5/libfftpack.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/libio_grib1.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share/libio_grib_share.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_int/libwrfio_int.a -L/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90 -lesmf_time /cantiere/rizza/WRFCHEM/WRFV361/external/RSL_LITE/librsl_lite.a /cantiere/rizza/WRFCHEM/WRFV361/frame/module_internal_header_util.o /cantiere/rizza/WRFCHEM/WRFV361/frame/pack_utils.o  -L/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -lwrfio_nf -L/cantiere/rizza/NETCDF/lib -lnetcdff -lnetcdf      
libwrflib.a(start_em.o): In function `start_domain_em_':
start_em.f90:(.text+0x1a881): undefined reference to `__module_input_tracer_MOD_initialize_tracer'
start_em.f90:(.text+0x1b958): undefined reference to `chem_init_'
start_em.f90:(.text+0x1cf06): undefined reference to `__module_gocart_aerosols_MOD_sum_pm_gocart'
start_em.f90:(.text+0x1d169): undefined reference to `__module_aerosols_sorgam_MOD_sum_pm_sorgam'
start_em.f90:(.text+0x1d45e): undefined reference to `__module_aerosols_soa_vbs_MOD_sum_pm_soa_vbs'
start_em.f90:(.text+0x1d708): undefined reference to `__module_mosaic_driver_MOD_sum_pm_mosaic'
collect2: error: ld returned 1 exit status
make[1]: [em_real] Errore 1 (ignorato)
mpif90  -o real.exe  -O2 -ftree-vectorize -funroll-loops -w -ffree-form -ffree-line-length-none -fconvert=big-endian -frecord-marker=4    real_em.o ../dyn_em/module_initialize_real.o libwrflib.a /cantiere/rizza/WRFCHEM/WRFV361/external/fftpack/fftpack5/libfftpack.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib1/libio_grib1.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_grib_share/libio_grib_share.a /cantiere/rizza/WRFCHEM/WRFV361/external/io_int/libwrfio_int.a -L/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90 -lesmf_time /cantiere/rizza/WRFCHEM/WRFV361/external/RSL_LITE/librsl_lite.a /cantiere/rizza/WRFCHEM/WRFV361/frame/module_internal_header_util.o /cantiere/rizza/WRFCHEM/WRFV361/frame/pack_utils.o  -L/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -lwrfio_nf -L/cantiere/rizza/NETCDF/lib -lnetcdff -lnetcdf      
real_em.o: In function `med_sidata_input_':
real_em.f90:(.text+0xdd31): undefined reference to `__module_input_chem_data_MOD_input_chem_profile'
libwrflib.a(start_em.o): In function `start_domain_em_':
start_em.f90:(.text+0x1a881): undefined reference to `__module_input_tracer_MOD_initialize_tracer'
start_em.f90:(.text+0x1b958): undefined reference to `chem_init_'
start_em.f90:(.text+0x1cf06): undefined reference to `__module_gocart_aerosols_MOD_sum_pm_gocart'
start_em.f90:(.text+0x1d169): undefined reference to `__module_aerosols_sorgam_MOD_sum_pm_sorgam'
start_em.f90:(.text+0x1d45e): undefined reference to `__module_aerosols_soa_vbs_MOD_sum_pm_soa_vbs'
start_em.f90:(.text+0x1d708): undefined reference to `__module_mosaic_driver_MOD_sum_pm_mosaic'
collect2: error: ld returned 1 exit status
make[1]: [em_real] Errore 1 (ignorato)
make[1]: uscita dalla directory "/cantiere/rizza/WRFCHEM/WRFV361/main"
( cd test/em_real ; /bin/rm -f wrf.exe ; ln -s ../../main/wrf.exe . )
if [ 0 -eq 1 ] ; then \
	  ( cd main ; make -i -r MODULE_DIRS="-I../dyn_em -I../dyn_nmm   -I/cantiere/rizza/WRFCHEM/WRFV361/external/esmf_time_f90  -I/cantiere/rizza/WRFCHEM/WRFV361/main -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_netcdf -I/cantiere/rizza/WRFCHEM/WRFV361/external/io_int -I/cantiere/rizza/WRFCHEM/WRFV361/frame -I/cantiere/rizza/WRFCHEM/WRFV361/share -I/cantiere/rizza/WRFCHEM/WRFV361/phys -I/cantiere/rizza/WRFCHEM/WRFV361/chem -I/cantiere/rizza/WRFCHEM/WRFV361/inc -I/cantiere/rizza/NETCDF/include " SOLVER=em IDEAL_CASE=real em_wrf_SST_ESMF ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f wrf.exe ; ln -s ../../main/wrf.exe . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f wrf_SST_ESMF.exe ; ln -s ../../main/wrf_SST_ESMF.exe . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f real.exe ; ln -s ../../main/real.exe . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f README.namelist ; ln -s ../../run/README.namelist . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f ETAMPNEW_DATA.expanded_rain ETAMPNEW_DATA RRTM_DATA RRTMG_LW_DATA RRTMG_SW_DATA ; \
               ln -sf ../../run/ETAMPNEW_DATA . ;                      \
               ln -sf ../../run/ETAMPNEW_DATA.expanded_rain . ;        \
               ln -sf ../../run/RRTM_DATA . ;                          \
               ln -sf ../../run/RRTMG_LW_DATA . ;                      \
               ln -sf ../../run/RRTMG_SW_DATA . ;                      \
               ln -sf ../../run/CAM_ABS_DATA . ;                       \
               ln -sf ../../run/CAM_AEROPT_DATA . ;                    \
               ln -sf ../../run/CAMtr_volume_mixing_ratio.RCP4.5 . ;   \
               ln -sf ../../run/CAMtr_volume_mixing_ratio.RCP6   . ;   \
               ln -sf ../../run/CAMtr_volume_mixing_ratio.RCP8.5 CAMtr_volume_mixing_ratio ;   \
               ln -sf ../../run/CAMtr_volume_mixing_ratio.A1B    . ;   \
               ln -sf ../../run/CAMtr_volume_mixing_ratio.A2     . ;   \
               ln -sf ../../run/CLM_ALB_ICE_DFS_DATA . ;               \
               ln -sf ../../run/CLM_ALB_ICE_DRC_DATA . ;               \
               ln -sf ../../run/CLM_ASM_ICE_DFS_DATA . ;               \
               ln -sf ../../run/CLM_ASM_ICE_DRC_DATA . ;               \
               ln -sf ../../run/CLM_DRDSDT0_DATA . ;                   \
               ln -sf ../../run/CLM_EXT_ICE_DFS_DATA . ;               \
               ln -sf ../../run/CLM_EXT_ICE_DRC_DATA . ;               \
               ln -sf ../../run/CLM_KAPPA_DATA . ;                     \
               ln -sf ../../run/CLM_TAU_DATA . ;                       \
               ln -sf ../../run/ozone.formatted . ;                    \
               ln -sf ../../run/ozone_lat.formatted . ;                \
               ln -sf ../../run/ozone_plev.formatted . ;               \
               ln -sf ../../run/aerosol.formatted . ;                  \
               ln -sf ../../run/aerosol_lat.formatted . ;              \
               ln -sf ../../run/aerosol_lon.formatted . ;              \
               ln -sf ../../run/aerosol_plev.formatted . ;             \
               ln -sf ../../run/CCN_ACTIVATE.BIN . ;                   \
               if [ 4 -eq 8 ] ; then                        \
                  ln -sf ../../run/ETAMPNEW_DATA_DBL ETAMPNEW_DATA ;   \
                  ln -sf ../../run/ETAMPNEW_DATA.expanded_rain_DBL ETAMPNEW_DATA.expanded_rain ;   \
                  ln -sf ../../run/RRTM_DATA_DBL RRTM_DATA         ;   \
                  ln -sf ../../run/RRTMG_LW_DATA_DBL RRTMG_LW_DATA ;   \
                  ln -sf ../../run/RRTMG_SW_DATA_DBL RRTMG_SW_DATA ;   \
               fi ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f GENPARM.TBL ; ln -s ../../run/GENPARM.TBL . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f LANDUSE.TBL ; ln -s ../../run/LANDUSE.TBL . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f SOILPARM.TBL ; ln -s ../../run/SOILPARM.TBL . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f URBPARM.TBL ; ln -s ../../run/URBPARM.TBL . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f VEGPARM.TBL ; ln -s ../../run/VEGPARM.TBL . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f MPTABLE.TBL ; ln -s ../../run/MPTABLE.TBL . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f tr49t67 ; ln -s ../../run/tr49t67 . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f tr49t85 ; ln -s ../../run/tr49t85 . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f tr67t85 ; ln -s ../../run/tr67t85 . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f gribmap.txt ; ln -s ../../run/gribmap.txt . ) ; \
	  ( cd test/em_esmf_exp ; /bin/rm -f grib2map.tbl ; ln -s ../../run/grib2map.tbl . ) ; \
	fi
( cd test/em_real ; /bin/rm -f real.exe ; ln -s ../../main/real.exe . )
( cd test/em_real ; /bin/rm -f tc.exe ; ln -s ../../main/tc.exe . )
( cd test/em_real ; /bin/rm -f ndown.exe ; ln -s ../../main/ndown.exe . )
( cd test/em_real ; /bin/rm -f nup.exe ; ln -s ../../main/nup.exe . )
( cd test/em_real ; /bin/rm -f README.namelist ; ln -s ../../run/README.namelist . )
( cd test/em_real ; /bin/rm -f ETAMPNEW_DATA.expanded_rain ETAMPNEW_DATA RRTM_DATA RRTMG_LW_DATA RRTMG_SW_DATA ;    \
             ln -sf ../../run/ETAMPNEW_DATA . ;                     \
             ln -sf ../../run/ETAMPNEW_DATA.expanded_rain . ;       \
             ln -sf ../../run/RRTM_DATA . ;                         \
             ln -sf ../../run/RRTMG_LW_DATA . ;                     \
             ln -sf ../../run/RRTMG_SW_DATA . ;                     \
             ln -sf ../../run/CAM_ABS_DATA . ;                      \
             ln -sf ../../run/CAM_AEROPT_DATA . ;                   \
             ln -sf ../../run/CAMtr_volume_mixing_ratio.RCP4.5 . ;  \
             ln -sf ../../run/CAMtr_volume_mixing_ratio.RCP6   . ;  \
             ln -sf ../../run/CAMtr_volume_mixing_ratio.RCP8.5 CAMtr_volume_mixing_ratio ;   \
             ln -sf ../../run/CAMtr_volume_mixing_ratio.A1B    . ;  \
             ln -sf ../../run/CAMtr_volume_mixing_ratio.A2     . ;  \
             ln -sf ../../run/CLM_ALB_ICE_DFS_DATA . ;              \
             ln -sf ../../run/CLM_ALB_ICE_DRC_DATA . ;              \
             ln -sf ../../run/CLM_ASM_ICE_DFS_DATA . ;              \
             ln -sf ../../run/CLM_ASM_ICE_DRC_DATA . ;              \
             ln -sf ../../run/CLM_DRDSDT0_DATA . ;                  \
             ln -sf ../../run/CLM_EXT_ICE_DFS_DATA . ;              \
             ln -sf ../../run/CLM_EXT_ICE_DRC_DATA . ;              \
             ln -sf ../../run/CLM_KAPPA_DATA . ;                    \
             ln -sf ../../run/CLM_TAU_DATA . ;                      \
             ln -sf ../../run/ozone.formatted . ;                   \
             ln -sf ../../run/ozone_lat.formatted . ;               \
             ln -sf ../../run/ozone_plev.formatted . ;              \
             ln -sf ../../run/aerosol.formatted . ;                 \
             ln -sf ../../run/aerosol_lat.formatted . ;             \
             ln -sf ../../run/aerosol_lon.formatted . ;             \
             ln -sf ../../run/aerosol_plev.formatted . ;            \
             ln -sf ../../run/capacity.asc . ;            \
             ln -sf ../../run/coeff_p.asc . ;            \
             ln -sf ../../run/coeff_q.asc . ;            \
             ln -sf ../../run/constants.asc . ;            \
             ln -sf ../../run/masses.asc . ;            \
             ln -sf ../../run/termvels.asc . ;            \
             ln -sf ../../run/kernels.asc_s_0_03_0_9 . ;            \
             ln -sf ../../run/kernels_z.asc . ;            \
             ln -sf ../../run/bulkdens.asc_s_0_03_0_9 . ;            \
             ln -sf ../../run/bulkradii.asc_s_0_03_0_9 . ;            \
             ln -sf ../../run/CCN_ACTIVATE.BIN . ;                   \
             if [ 4 -eq 8 ] ; then                       \
                ln -sf ../../run/ETAMPNEW_DATA_DBL ETAMPNEW_DATA ;  \
                ln -sf ../../run/ETAMPNEW_DATA.expanded_rain_DBL ETAMPNEW_DATA.expanded_rain ;   \
                ln -sf ../../run/RRTM_DATA_DBL RRTM_DATA ;          \
                ln -sf ../../run/RRTMG_LW_DATA_DBL RRTMG_LW_DATA ;  \
                ln -sf ../../run/RRTMG_SW_DATA_DBL RRTMG_SW_DATA ;  \
             fi )
( cd test/em_real ; /bin/rm -f GENPARM.TBL ; ln -s ../../run/GENPARM.TBL . )
( cd test/em_real ; /bin/rm -f LANDUSE.TBL ; ln -s ../../run/LANDUSE.TBL . )
( cd test/em_real ; /bin/rm -f SOILPARM.TBL ; ln -s ../../run/SOILPARM.TBL . )
( cd test/em_real ; /bin/rm -f URBPARM.TBL ; ln -s ../../run/URBPARM.TBL . )
( cd test/em_real ; /bin/rm -f VEGPARM.TBL ; ln -s ../../run/VEGPARM.TBL . )
( cd test/em_real ; /bin/rm -f MPTABLE.TBL ; ln -s ../../run/MPTABLE.TBL . )
( cd test/em_real ; /bin/rm -f tr49t67 ; ln -s ../../run/tr49t67 . )
( cd test/em_real ; /bin/rm -f tr49t85 ; ln -s ../../run/tr49t85 . )
( cd test/em_real ; /bin/rm -f tr67t85 ; ln -s ../../run/tr67t85 . )
( cd test/em_real ; /bin/rm -f gribmap.txt ; ln -s ../../run/gribmap.txt . )
( cd test/em_real ; /bin/rm -f grib2map.tbl ; ln -s ../../run/grib2map.tbl . )
( cd run ; /bin/rm -f real.exe ; ln -s ../main/real.exe . )
( cd run ; /bin/rm -f tc.exe ; ln -s ../main/tc.exe . )
( cd run ; /bin/rm -f ndown.exe ; ln -s ../main/ndown.exe . )
( cd run ; /bin/rm -f nup.exe ; ln -s ../main/nup.exe . )
( cd run ; if test -f namelist.input ; then \
		/bin/cp -f namelist.input namelist.input.backup ; fi ; \
		/bin/rm -f namelist.input ; cp ../test/em_real/namelist.input . )
build started:   mer 30 ago 2017, 17.35.56, CEST
build completed: mer 30 ago 2017, 17.36.04, CEST
