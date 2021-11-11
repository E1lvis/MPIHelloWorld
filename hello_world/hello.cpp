#include <mpi.h>
#include <unistd.h>
#include <iostream>

int main(int argc, char*argv[]) {
MPI_Init(&argc, &argv);

int processNumber;
int totalProcesses;
int processorNameSize;
char processorName[MPI_MAX_PROCESSOR_NAME];

MPI_Comm_rank(MPI_COMM_WORLD, &processNumber);
MPI_Comm_size(MPI_COMM_WORLD, &totalProcesses);
MPI_Get_processor_name(processorName, &processorNameSize);

std::cout<<"I am process "<< processNumber << " out of " << totalProcesses << ". I am running on machine" << processorName << ". \n";

MPI_Finalize();
}
