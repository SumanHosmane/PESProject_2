#include <stdio.h>
#include <stdlib.h>

int buff_count, *base_addr[10], *head[10], *tail[10];

int addbuff(int buff_num, char c)
{
	if(buff_num == 0)
	{
		printf("Enter a non-zero value for size of buffer\n");
		return 0;
	}

	base_addr[buff_count] = (int*) malloc(buff_num * sizeof(int));

	if(base_addr == NULL)
	{
		printf("Buffer not created due to corrupted memory.\n"); 
	}

	head[buff_count] = base_addr[buff_count];
	tail[buff_count] = base_addr[buff_count] - 1;

	buff_count++;
}
