#include <stdio.h>

int main()
{
	int *ptai; /*pointer to an integer*/
	char *ptac; /*pointer to a character*/
	float *ptaf; /* Pointer to a float */
	double *ptad; /* Pointr to a double */

	/* prints size of the pointers */

	printf("The size of the pointer to a variable is :%d\n",sizeof(*ptai));
	printf("The size of the pointer to a character is :%d\n", sizeof(*ptac));
	printf("The sizo of the pointer to a float is :%d\n", sizeof(*ptaf));
	printf("The size of the pointer to a double is :%d\n", sizeof(*ptad));

	return 0;
}


