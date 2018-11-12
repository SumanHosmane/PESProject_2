#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define check (count >= length)

int *base_addr[10], *head[10], *tail[10], buff_char_count[10], buff_size[10], buff_count;

int addchar(int buff_num, char c)
{
	buff_num-=1;
	//printf("buffsize%d---- charcount%d",buff_size[buff_num], buff_char_count[buff_num]);
	if(buff_count == 0)
	{
		printf("Please allocate a buffer before entering a character.\n");
		return 1;
	}

	if((buff_num +1) > buff_count)
	{
		printf("Buffer_%d does not exist", (buff_num + 1));
		return 1;
	}

	if(buff_char_count[buff_num] >=  buff_size[buff_num])		//number of characters in buffer is more than the buffer length
	{
		printf("Buffer_full. Values will be overwritten.\n");
		printf("Value thrown out: %c\n",*tail[buff_num]);		
		tail[buff_num] += 1;
	}

	head[buff_num] = head[buff_num] + 1 >= (base_addr[buff_num] + buff_size[buff_num]) ? base_addr[buff_num] : head[buff_num] + 1;		//verifying if pointer is within buffer length limit
        *head[buff_num] = c;	//adding new character into buffer
	buff_char_count[buff_num]++;

	printf("Character '%c' has been added to buffer_%d", c, buff_num );
	return 0;
}
