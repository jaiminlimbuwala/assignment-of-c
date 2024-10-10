/*Find character value from ascii*/

#include<stdio.h>
int main()
{
	int asciivalue;
	char ch;
	printf("\nEnter the ch = ");
	scanf("%c",&asciivalue);
	
	if(asciivalue>=66 && asciivalue<= 125)
	{
		ch = (int)asciivalue;
		printf("\nThe asciivalue for character %c is %d",asciivalue,ch);
	}
	else
	{
		printf("please enter the valid character ");
	}
	return 0;
}
