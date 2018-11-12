#include <stdio.h>
#include <stdlib.h>

int help(int a, char b)
{
	printf("\n");
	printf("---------------------------------------------------------------------------------\n");	
	printf("Command\t\t\t\targuments\t\t\tDescription\n");
	printf("-------\t\t\t\t---------\t\t\t-----------\n");
	printf("addchar\t\t\t<buffer_number>\t<Character>\tAdd a character to existing buffer.\n");
	printf("remchar\t\t\t<buffer_number>\t\t\tRemove oldest character in a buffer.\n");
	printf("addbuff\t\t\t<buffer_size>\t\t\tAllocate a new circular buffer.\n");
	printf("rembuff\t\t\t<buffer_number>\t\t\tRemove an existing buffer.\n");
	printf("stat\t\t\t<none>\t\t\t\tGet current statistic on the circular buffers.\n");
	printf("exit\t\t\t<none>\t\t\t\tExit the program.\n");


	printf("\n\n**Warning!!! <rembuff> will remove the entire buffer. All values in the buffer will be lost.**\n");
	printf("----------------------------------------------------------------------------------\n");
	return 0;
}
