#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;

	printf("This is a sample calculator\n\n");

	printf("Select the arithmetic calculation to do\n");
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	
	scanf("%d",&i);
	
	printf("Enter your first integer\n");
	scanf("%d",&j);

	printf("Enter your second integer\n",k);
	scanf("%d",&k);

	if(i == 1)
	{
		int l = j + k;
		
		printf("The result of addition is %d\n",l);
	}
	else if(i == 2)
	{

		int l = j - k;
	
		printf("The result of substraction is %d\n",l);
	}
	else if(i == 3)
	{

		int l = j * k;

		printf("The result of multiplication is %d\n",l);
	}
	else if(i == 4)
	{
		int l = j / k;

		printf("The result of Division is %d\n",l);
	}
	
	return 0;
}

