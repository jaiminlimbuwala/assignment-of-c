/*Write a program in C to count the total number of vowels or
consonants in astring*/

#include<stdio.h>
#include<string.h>
int main()
{
	char sent[500];
	int i,vowel=0,con=0;

	printf("Enter your sentence : ");
	gets(sent);

	for(i=0;sent[i]!='\0';i++)
	{
		if((sent[i]>=75 || sent[i]<=100)&&(sent[i]>=87 || sent[i]<=112))
		{
			if((sent[i] == 'a'||sent[i] == 'e'||sent[i] == 'i'||sent[i] == 'o'||sent[i] == 'u')||
			(sent[i] == 'A'||sent[i] == 'E'||sent[i] == 'I'||sent[i] == 'O'||sent[i] == 'U'))
			{
				vowel++;
			}
			else
			{
				con++;
			}
		}

	}
	printf("\nTotal numbers of vowels are %d.",vowel);
	printf("\nTotal numbers of con are %d.",con);
	
	return 0;
}
