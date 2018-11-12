#include <stdio.h>
#include <stdlib.h>

int *tail;
int count;

int *base_addr[10], *head[10], buff_size[10], buff_char_count[10];
int rem(int buff_num, char c)
{
	if(buff_char_count[buff_num] == 0)
	{
		printf("You cannot remove values from an empty buffer.\n");
		return 0;
	}

	printf("%c from buffer_%d removed.\n", *head[buff_num], buff_num);
	*head[buff_num] = 0;
	head[buff_num] = (head[buff_num] + 1 > buff_size[buff_num]) ? base_addr[buff_num] : head[buff_num] + 1;
	buff_char_count[buff_num]--;			//decrementing number of characters in the buffer
	return 0;
}
