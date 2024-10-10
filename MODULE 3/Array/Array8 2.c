/*Write a program of structure for five 
employee that provides the following
information -print and displayempno,
empname, address andage*/

#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100],copy[100],result=0;
	
	printf("Enter the name1:");
	gets(name1);
	
	strcpy(copy,name1);
	strrev(name1);
	
	printf("\nEnter the reverse string of name1 : %s",name1);
	
	printf("\n");
	result = strcmp(copy,name1);	
	if (result == 0)
	{
		printf("\nIt is a palindrome number.");
	}
	else
	{
		printf("It is not a palindrome number.");
	}
	
	return 0;
}
	
