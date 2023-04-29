#include <stdio.h>

int main()
{
	char name;
	int dob;
	long int contact;

	printf("Enter your name:");
	scanf("%s",&name);
	printf("Enter your year of birth:");
	scanf("%d",&dob);
	printf("Enter your contact number in full with no country code");
	scanf("%d",&contact);

	printf("Your data has been succesifully saved");


}

