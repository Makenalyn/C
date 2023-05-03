#include <stdio.h>

int main()
{
	int variable = 122;
	int *pointer;

	printf("The value of the variable is :%d\n",variable);
	printf("The address of pointer declared is :%x\n", &*pointer);

	pointer = &variable;
	
	printf("The address of the variable is :%x\n", &variable);
	printf("The address of pointer after assigning it address of the variable is :%x\n", &*pointer);
	printf("The address stored in the pointer variable is :%x\n", pointer);

	/* Value at the pointer is */

	printf("The value assigned to the pointer is :%d\n", *pointer);


	/* another pointer declared and assigned a null value */

	int *pointer_two = NULL;

	printf("The value assigned to the second declared pointer is null, as shown here :%x\n", &*pointer_two);


	if (!pointer_two)
	{
		printf("This statement prints if the pointer is null");
	}


}

