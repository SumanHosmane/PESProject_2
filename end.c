#include <stdio.h>
#include <stdlib.h>

int exit_flag;
int end(int a)
{
	printf("Exiting.\n");
	exit_flag =1;
	exit(0);
}

