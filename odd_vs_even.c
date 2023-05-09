#include <stdio.h>

int main()
{
	int number;
	printf("Print an integer to be checked wheter it is an oddd or even: ");
	scanf("%d",&number);

	if(number % 2 == 0)
	
		printf("you entered an even number");
		else
			printf("The number is odd");
	

	return 0;
}

