#include <stdio.h>

void recursion(char *str);

int main()
{
	recursion("This is the world greatest");

	return (0);
}

void recursion(char *str)
{
	if (*str == '\0')
	{
		putchar('\n');

		return;
	
	}
	putchar(*str);

	recursion(str + 1);
}
