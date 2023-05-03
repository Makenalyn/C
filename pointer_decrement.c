#include <stdio.h>

const int MAX = 8;

int main()
{
	int array_of_classes[] = {1,2,3,4,5,6,7,8};
	int i;
	int *pointer;

	pointer = &array_of_classes[MAX-1];

	for(i=MAX; i>0; i--)
	{
		printf("The address of each class at :[%d] index is :%x\n" , i, pointer);
		printf("The value of the variables at index :[%d] is %d\n", i, *pointer);

		pointer--;
	}
	return 0;
}

