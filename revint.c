#include <stdio.h>

int x;
int reverse(int x)
{
	int a = 0;
	int reversedint;
	while(x)
	{
		a = x % 10;
		reversedint = reversedint * 10 + a;
		x /= 10;

	}
	printf("Reversed number is :%d\n",reversedint);

	
}

int main()
{

	reverse(1234567);
	return 0;
}

