#include <stdio.h>
#include <stdlib.h>

int *base_addr[10], buff_count;

int rembuff(int buff_num)
{
	buff_num-= 1;
	if(buff_num < 0 || buff_num > buff_count)
	{
		printf("Buffer number invalid.\n");
		return 1;
	}

	if(buff_count == 0)
	{
		printf("No buffer to remove.\n");
		return 1;
	}

	if((buff_num + 1) > buff_count)
	{
		printf("Buffer_%d does not exist to remove.\n", (buff_num+1));
		return 1;
	}

	if(*base_addr[buff_num] == 1)
	{
		printf("This buffer has already been freed.\n");
		return 0;
	}

	free(base_addr[buff_num]);
	*base_addr[buff_num] = 1;
	printf("Circular Buffer_%d is deleted.\n",(buff_num +1));
	buff_count--;
	return 0;
}
