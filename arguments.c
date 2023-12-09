#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argument at index[%d] is %s\n", i, argv[i]);
	}
	return (0);
}
