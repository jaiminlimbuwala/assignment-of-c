/*Write a program in C to remove characters from a string 
except alphabets*/

#include<stdio.h>
int main()
{
	char str[200];
	int i;
	printf("Enter string = ");
	gets(str);
	printf("Program in C to remove characters from string except alphabets. ");
	for(i=0; str[i]!='\0'; i++)
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || str[i]==' ')
		{
			printf("%c",str[i]);
		}
	}
		return 0;
}
