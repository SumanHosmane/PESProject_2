#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define check (count >= length)

int *base_addr[10], *head[10], *tail[10], buff_char_count[10], buff_size[10];

int add(int buff_num, char c)
{

	if(buff_char_count[buff_num] >=  buff_size[buff_num])
	{
		printf("Buffer_full. Values will be overwritten.\n");
		printf("Value thrown out:  %c\n",*head[buff_num]);		
	}

	head[buff_num] = head[buff_num + 1] >= (base_addr[buff_num] + buff_size[buff_num]) ? base_addr[buff_num] : head[buff_num + 1];
        *head[buff_num] = c;
	return 0;
}
