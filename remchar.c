#include <stdio.h>
#include <stdlib.h>

int *base_addr[10], *tail[10], buff_size[10], buff_char_count[10], buff_count;
int remchar(int buff_num, char c)
{
	buff_num -= 1;

	if(buff_num < 0 || ((buff_num + 1) > buff_count))
	{
		printf("Enter valid buffer number.\n");
		return 1;
	}

	if(buff_char_count[buff_num] == 0)
	{
		printf("You cannot remove values from an empty buffer.\n");
		return 1;
	}

	printf("%c from buffer_%d removed.\n", *tail[buff_num], buff_num);
	*tail[buff_num] = '\0';
	tail[buff_num] = (tail[buff_num] + 1 > (base_addr[buff_num] + buff_size[buff_num])) ? base_addr[buff_num] : tail[buff_num] + 1;
	buff_char_count[buff_num]--;			//decrementing number of characters in the buffer
	return 0;
}
