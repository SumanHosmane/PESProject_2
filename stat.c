#include <stdio.h>
#include <stdlib.h>

int buff_size[10], buff_count, buff_char_count[10], *base_addr[10];

int stat()
{

	if(buff_count == 0)
	{
		printf("No stats to display.\n");
		return 1;
	}
	
	printf("\n");
	printf("Current Stats\n-------------\n\n");
	printf("Number of Circular Buffers:\t%d\n\n", buff_count);
	printf("Buffer #\t\t Buffer Size\t\t No. of Char in Buffer\t\tBuffer Start Add \t\t Buffer End Add\n");
	printf("--------\t\t -----------\t\t ---------------------\t\t---------------- \t\t --------------\n");
	for(int i=0;i<buff_count;i++)
	{
		printf("%d \t\t\t\t %d \t\t\t %d \t\t\t %p \t\t %p\n", i+1, buff_size[i], buff_char_count[i], base_addr[i], (base_addr[i] + buff_size[i])); 
	}

	
	return 0;
}
