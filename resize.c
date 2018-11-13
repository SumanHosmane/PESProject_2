#include <stdio.h>
#include <stdlib.h>
#define rem_mem (buff_size[buff_num] - mem_locations)

int buff_size[10], buff_count;
int resize(int buff_num, char c, int mem_locations)
{
	if(buff_num > buff_count)
	{
		printf("Buffer_%d does not exist.\n", buff_num);
		return 1;
	}

	if(c == '\0')
	{
		printf("Enter a valid symbol.\n");
		return 1;
	}

	if(mem_locations == 0)
	{
		printf("Resize factor is 0. Buffer_%d will not be resized.\n", (buff_num + 1));
		return 1;
	}

	buff_num-=1;
	if(c == '+')
	{
		buff_size[buff_num] = (buff_size[buff_num] + mem_locations);
		printf("Buffer_%d has been resized to %d\n", (buff_num+1), buff_size[buff_num]);
		return 0;
	}
	

	else if(c == '-')
	{
		if(rem_mem > 0)
		{	
			buff_size[buff_num] = rem_mem;
		}

		else
                {
	               printf("Resize value is bigger than the buffer size.\n");
	               return 1;
	        }
		printf("Buffer_%d has been resized to %d.\n",(buff_num+1), buff_size[buff_num]);
		return 0;
	}

	else
	{
		printf("Inavlid Symbol.\n");
		return 1;
	}


	return 0;
}
