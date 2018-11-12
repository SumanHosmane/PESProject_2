#include <stdio.h>
#include <stdlib.h>

int help(int a, char b)
{	
	printf("Command\t\t\targuments\t\t\tDescription\n");
	printf("-------\t\t\t---------\t\t\t-----------\n");
	printf("addchar\t\t\t<buffer_number>\t<Character>\tAdd a character to existing buffer.\n");
	printf("remchar\t\t\t<buffer_number>\t\t\tRemove oldest charater in a buffer.\n");
	printf("addbuff\t\t\t<buffer_size>\t\t\tAllocate a new circular buffer.\n");
	printf("rembuff\t\t\t<buffer_number>\t\t\tRemove an existing buffer.\n");
	printf("exit\t\t\t<none>\t\t\t\tExit the program.\n");


	printf("\n\n**Warning!!! <rembuff> will remove the entire buffer. All values in the buffer will be lost.**\n");
	return 0;
}
