#include <stdio.h>
#include <stdlib.h>

int *base_addr[10], buff_count;

int rembuff(int buff_num, char c)
{
	if(*base_addr[buff_num] == 1)
	{
		printf("This buffer has already been freed.\n");
		return 0;
	}

	free(base_addr[buff_num]);
	*base_addr[buff_num] = 1;
	printf("Circular Buffer_%d is deleted.\n",buff_num);
	buff_count--;
	return 0;
}
