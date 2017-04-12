#include <stdio.h>

void newprozess(int n,char* argv[], int argc);

int OSMP_Init(int *argc, char ***argv);
int OSMP_Size(int *size);
int OSMP_Rank(int *rank);
int OSMP_Send(const void *buf, int count, int dest);
int OSMP_Recv(void *buf, int count, int *source, int *len);
int OSMP_Finalize(void);






