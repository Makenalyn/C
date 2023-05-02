#include <stdio.h>

int main()
{
	
	char i = 'A';

	switch(i)
	{
	case 'A':
	printf("\nExcellent. You scored above 80 marks\n\n");
	break;
	case 'B':
	printf("Above average\n");
	break;
	case 'C':
	printf("Below average \n");
	break;
	case 'D':
	printf("Fail\n");
	break;
	}
	printf("Congratulations for sitting for the exam ");
	
	return 0;
}

