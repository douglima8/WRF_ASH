#!/bin/sh
### Nome del job
#PBS -N real 
### Declare job non-rerunable
#PBS -r n
### Output files
#PBS -e WRF.ERR
#PBS -o WRF.OUT 
### Inserire il proprio indirizzo email
#PBS -M rizza@le.isac.cnr.it
#PBS -m ae
### Coda su cui lanciare il job
#PBS -q socrate 
### Numero di nodi (min=1 max=8) - ppn= Numero di processori per nodo (min=1 max=16)
####PBS -l nodes=4:ppn=16
#PBS -l nodes=socrate10:ppn=16+socrate11:ppn=16+socrate12:ppn=16+socrate13:ppn=16

# Directory di lavoro: $PBS_O_WORKDIR
##cd $PBS_O_WORKDIR
cd /cantiere/rizza/WRFCHEM/WRFV361/test/em_real/ 

echo Running on host `hostname`
echo Time is `date`
echo Directory is `pwd`
echo This jobs runs on the following processors:
echo `cat $PBS_NODEFILE`
# Define number of processors
NPROCS=`wc -l < $PBS_NODEFILE`
echo This job has allocated $NPROCS nodes

# Run the parallel MPI executable "a.out"
/cantiere/rizza/openmpi-1.10.2/bin/mpirun -v -machinefile $PBS_NODEFILE -np $NPROCS ./real.exe
