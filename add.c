#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define check (count >= length)
int length, *base_addr, *head, count=0, *tail, buff_full_flag=0;
int add(int value)
{
//	int length, *base_addr, *in_ptr, count=0, *out_ptr, buff_full_flag=0;
	char c, str[5];
	bool buff_full = true;
					
	if(buff_full && check)
	{
		buff_full = false;
		buff_full_flag = true;
		printf("\n\nBuffer is full, values will be overwritten!!!!\n\n");
	}


	{

	in_ptr = check ? base_addr : (in_ptr+1);
        count = check ? 0 : count;
        *in_ptr = c;
	count++;

	for(int i=0;i<length;i++)
        {
	    printf("%c",*(base_addr+i));
	}
	printf("\n");
	return 0;
}
