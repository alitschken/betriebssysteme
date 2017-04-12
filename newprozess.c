#include "newprozess.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

// maximale Zahl der Nachrichten pro Prozess
#define OSPM_MAX_MESSAGES_PROC 16
// maximale Anzahl der Nachrichten, die insgesamt vorhanden sein dürfen
#define OSPM_MAX_SLOTS 256
// maximale Länge der Nutzlast einer Nachricht
#define OSPM_MAX_PAYLOAD_LENGTH 128

#define OSMP_SUCCESS 0
#define OSMP_ERROR -1

void newprozess(int n, char* argv[], int argc) {
	int exec;
	int i;
	char* text[3];

	pid_t pid[n];

	//for (i = 0; i < 3; i++) {
	//	text[i] = argv[i];
	//	printf(text);
	//	printf("\n");
	//}

	for (int i = 0; i < n; i++) {
		wait();
		//pid[i] = fork(); //stack heap zeug funkt nicht wegen zeiger auf gleichen bereich

		pid_t tmp = fork();

		if (tmp == 0) {
			printf("neuer prozess\n");
			pid[i] = tmp;
			exec = execv("/home/aw/git/echoallbesys/Release/echoallbesys", argv); // variable listenlänge
			//exec = execlp("/home/aw/git/echoallbesys/Release/echoallbesys", argv[0],argv[1],argv[2],
			//NULL);	// feste argumentenliste
			//exit(0);	// beenden

			/*} else {

			 waitpid(tmp);	// warten auf prozess mit tmp pid
			 //sleep(5);	//5 sekunden anhalten
			 printf("elternprozess\n");

			 }*/

		}
	}

}
