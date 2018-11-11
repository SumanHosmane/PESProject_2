#include <stdio.h>
#include "func.h"
#include <string.h>
#include <stdlib.h>

extern int *head, *tail;

int main(int argc, char *argv[])
{
	int *base_addr;
	int buffer_size, value;
	char user_func_in[10], cmd[5];

	buffer_size = *argv[1] - '0';
	int (*func_arr[])(int) = {add, rem};
	head = base_addr - 1;
        tail = base_addr;

	base_addr = (int*)malloc(buffer_size * sizeof(int));

	//while(1)
//	{
		printf(">>");
		char *func_names[] = {"add", "rm"};

		fgets(user_func_in, 10, stdin);
		sscanf(user_func_in,"%s %d", cmd, &value);
		for(int i=0;i<2;i++)
		{
			if(strcmp(cmd, func_names[i]) == 0)
			{
				func_arr[i](value);
			}

			else
			{
				printf("Invalid input. Try again\n");
			}
		}


		return 0;
}
