#include <mpi.h>
#include <unistd.h>
#include <iostream>

int main(int argc, char*argv[]) {
MPI_Init(&argc, &argv);

int processNumber;
int totalProcesses;

MPI_Comm_rank(MPI_COMM_WORLD, &processNumber);
MPI_Comm_size(MPI_COMM_WORLD, &totalProcesses);

std::cout<<"I am process "<< processNumber << " out of " << totalProcesses << " ";

MPI_Finalize();
}
