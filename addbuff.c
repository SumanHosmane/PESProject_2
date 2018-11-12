#include <stdio.h>
#include <stdlib.h>

int buff_count, buff_size[10], *base_addr[10], *head[10], *tail[10];

int addbuff(int buff_length, char c)
{
	//printf("%d\n",buff_length);
	if(buff_length <= 0 || buff_length > 10000)
	{
		printf("Enter a valid non-zero argument for size of buffer.\n");
		return 0;
	}

	base_addr[buff_count] = (int*) malloc(buff_length * sizeof(int));

	if(base_addr == NULL)
	{
		printf("Buffer not created due to corrupted memory.\n"); 
	}
	
	buff_size[buff_count] = buff_length; 

	head[buff_count] = base_addr[buff_count] - 1;
	tail[buff_count] = base_addr[buff_count];
	buff_count++;
	printf("Buffer_%d with size %d has been created.\n", buff_count, buff_length);

	//printf("%p", base_addr);
	return 0;
}
