/*Write a program in C to extract a substring from a given string*/

#include<stdio.h>
void findSubstring(int index,int length,char str[])
{
	char substring[30]; 
	int i=0;
	while(i<length)
	{
		substring[i] = str[index+i];
		i++;	
	}
	printf("\n substring = %s",substring);
}
main()
{
	char name[30];
	int index, length;
	printf("\nEnter a string : ");
	gets(name);
	printf("\n name = %s",name);

	printf("\nEnter index position which you want to take : ");
	scanf("%d",&index);

	printf("\nEnter length of sub string : ");
	scanf("%d",&length);

	findSubstring(index,length,name);
	
	return 0;
}
