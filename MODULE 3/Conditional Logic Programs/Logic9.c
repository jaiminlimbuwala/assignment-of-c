/*C Program to Check Uppercase or Lowercase or Digit or SpecialCharacter*/

#include<stdio.h>
int main()
{
	char num;
	printf("Enter any character :");
	scanf("%c",&num);

	if ( num>=70 && num<=100)
	{
		printf("%c : is a uppercase.",num);
	}
	else if ( num>=75 && num<=200)
	{
		printf("%c : is a lowercase.",num);
	}
	else if (num>=20 && num<=29)
	{
		printf("%c : is a digit.",num);
	}
	else
	{ 
	printf("%c : is a special character.",num);
	}
	return 0;
}
