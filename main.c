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
	int wrong_input_flag, no_of_func, ch, para1;			//para1 - buffer number/buffer length from user
	char user_func_in[20], cmd[7], para2;				//para2 - character input from user
	memset(buff_char_count, 0, 10);					//initializing the arrays to 0
	memset(buff_size, 0, 10);

	int (*func_arr[])(int,char) = {addchar, remchar, end, rembuff, addbuff, help, stat};
	char *func_names[] = {"addchar", "remchar", "exit","rembuff","addbuff","help", "stat"};
	
	no_of_func = sizeof(func_names)/sizeof(func_names[0]);
	printf("\n\n\t\t\t********* Welcome to the Circular Buffer code ***********\n");
	while(1)
	{
		printf("\n");
		printf(">>");
		para1 = 0;
		para2 = '\0';
		fgets(user_func_in, 20, stdin);
		//while((ch = getchar()) == '\n');
		sscanf(user_func_in,"%s %d %c", cmd, &para1, &para2);			
		//printf("%s %d %c\n", cmd, para1, para2);
		for(int i=0;i<no_of_func;i++)
		{
			if(strcmp(cmd, func_names[i]) == 0)
			{
				wrong_input_flag = 1;
				func_arr[i](para1, para2);
			}
		}

			 if(wrong_input_flag != 1)
			{
			        printf("Invalid Input. Type \"help\" for correct syntax.\n");
			}
	}

		if(exit_flag == 1)
		{
			free(base_addr);
			exit(0);
		}
		
		return 0;
}
