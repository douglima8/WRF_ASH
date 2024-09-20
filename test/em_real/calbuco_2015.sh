#!/bin/sh

DIR_EMISSION=/cantiere/rizza/WRFCHEM/prepare_emissions/CALBUCCO_part_II_polar
CASE=calbuco-T

zero=0
year=2015
mes=4
cmes=APRIL
idx=22
fdx=22
ihr=00

############ loop for each day between idx-fdx ----------------------------------------------
day=`expr $idx \* 1`
day0=`expr $day - 1`
cday0=$day0

rm -f wrfchemi_d01 wrfchemi_d01_$year-$cmes-${cday0}_$ihr:00:00
rm -f wrfchemi_gocart_bg_d01 wrfchemi_gocart_bg_d01_$year-$cmes-${cday0}_$ihr:00:00
rm -f wrffirechemi_d01 wrffirechemi_d01_$year-$cmes-${cday0}_$ihr:00:00

while [ $day -le $fdx ]
do

cmes=$mes
if [ $mes -lt 10 ]; then cmes=$zero$mes; fi

cday=$day
day1=`expr $day + 1`
cday1=$day1

if [ $day -lt 10 ]; then cday=$zero$day; fi
if [ $day1 -lt 10 ]; then cday1=$zero$day1; fi
 
echo 'running day ' $cday

rm -f namelist.input
rm -f rsl* wrf_gocart_backg emissopt3_d01 emissfire_d01
cp $DIR_EMISSION/namelist.input.real0.$day$cmes$year namelist.input
./real.exe
if ( $? != 0 ); then
   echo "error in real-0"
   exit 0
else
   echo " real-0 OK"
fi

ln -sf $DIR_EMISSION/$CASE-$year-$cmes-$cday-000000-g1-gocartBG.bin wrf_gocart_backg
ln -sf $DIR_EMISSION/$CASE-$year-$cmes-$cday-000000-g1-ab.bin emissopt3_d01
ln -sf $DIR_EMISSION/$CASE-$year-$cmes-$cday-000000-g1-bb.bin emissfire_d01

rm -f namelist.input
rm -f rsl* wrfchemi_d01 wrfchemi_gocart_bg_d01 wrffirechemi_d01
cp $DIR_EMISSION/namelist.input.chem.$day$cmes$year namelist.input
./convert_emiss.exe

if ( $? != 0 ); then
   echo "error in convert_emission"
   exit 0
else
   echo " convert OK"
fi

ln -sf wrfchemi_d01 wrfchemi_d01_$year-$cmes-${cday}_$ihr:00:00
ln -sf wrfchemi_gocart_bg_d01 wrfchemi_gocart_bg_d01_$year-$cmes-${cday}_$ihr:00:00
ln -sf wrffirechemi_d01 wrffirechemi_d01_$year-$cmes-${cday}_$ihr:00:00

rm -f rsl.*
./real.exe

#################### -------------------------------------------------------

day=`expr $day + 1`
done

exit
