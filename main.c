/*
 *addchar ---> buff_num char
 *remcgar ---> buff_num
 *addbuff ---> buff_size
 *rembuff ---> buff_num
*/

#include <stdio.h>
#include "func.h"
#include <string.h>
#include <stdlib.h>

extern int *base_addr[10], *head[10], *tail[10];
extern int exit_flag, buff_count, buff_char_count[10], buff_size[10];

int main(int argc, char *argv[])
{	
	int wrong_input_flag, no_of_func, para1;
	char user_func_in[10], cmd[5], para2;

	int (*func_arr[])(int,char) = {addchar, remchar, end, rembuff, addbuff, help};
	char *func_names[] = {"addchar", "remchar", "exit","rembuff","addbuff","help"};
	//base_addr = (int*)malloc(buffer_size * sizeof(int));
	no_of_func = sizeof(func_names)/sizeof(func_names[0]);
	while(1)
	{
		printf("\n");
		printf(">>");	

		fgets(user_func_in, 10, stdin);
		sscanf(user_func_in,"%s %d %c", cmd, &para1, &para2);			
		for(int i=0;i<no_of_func;i++)
		{
			if(strcmp(cmd, func_names[i]) == 0)
			{
				wrong_input_flag = 1;
				func_arr[i](para1, para2);
			}
		}
	}
		if(exit_flag == 1)
		{
			free(base_addr);
			exit(0);
		}
			

		if(wrong_input_flag != 1)
		{
			printf("Invalid Input. Type \"help\" for correct syntax.\n");
		}

		return 0;
}
