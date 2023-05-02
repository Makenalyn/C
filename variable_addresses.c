#include <stdio.h>

int main()
{
	int var1;
	int var2;
	char varc;
	float var4;

	printf("The following are all the momory locations of variables declared inside the function main\n");
	printf("The adress of var1 is :%x\n", &var1);
	printf("The address of var2 is :%x\n", &var2);
	printf("The address of varc is :%x\n", &varc);
	printf("The address of var4 is :%x\n", &var4);

	return 0;
}

