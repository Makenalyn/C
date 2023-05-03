#include <stdio.h>

const int MAX = 8;

int main()
{
	/* integer pointer*/

	int p_classes[] = {1,2,3,4,5,6,7,8};
	int i, *pointer;

	pointer = p_classes;

	for(i=0; i<MAX; i++)
	{
		printf("The address of each class is :[%d] = %x\n", i, pointer);
	
		printf("The value of each class id :[%d] = %d\n", i, *pointer);


		pointer++;
	}

	return 0;
}


