#include "newprozess.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


// maximale Zahl der Nachrichten pro Prozess
#define OSPM_MAX_MESSAGES_PROC
16
// maximale Anzahl der Nachrichten, die insgesamt vorhanden sein dürfen
#define OSPM_MAX_SLOTS
256
// maximale Länge der Nutzlast einer Nachricht
#define OSPM_MAX_PAYLOAD_LENGTH 128


#define OSMP_SUCCESS 0
#define OSMP_ERROR -1


void newprozess(int n){
	pid_t =pid[n];
	for( int i = 0;i<n;i++){
		pid[i] = fork();
		printf(getpid());
		exit();
	}




}
