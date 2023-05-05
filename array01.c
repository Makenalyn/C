#include <stdio.h>

int main()
{
	printf("Prints items in an array\n");
	int j;
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	int i;

	for(i=0; i<9; i++)
	{
		printf("The item at index :[%d] is :%d\n", i, array[i]);
	}
	return 0;
}

