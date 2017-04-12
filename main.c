#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "newprozess.h"

#define OSMP_SUCCESS 0
#define OSMP_ERROR -1



int main(int argc, char* argv[]) {
	int i;
	char* text;

	/*for (i = 0; i < 3; i++) {
		text = argv[i];
		printf(text);
		printf("\n");
	}*/
	newprozess(5,argv,argc);
	return 0;
}

