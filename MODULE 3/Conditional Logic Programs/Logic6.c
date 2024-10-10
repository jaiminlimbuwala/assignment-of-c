/*Find the Character Is Vowel or Not*/

#include<stdio.h>
int is_vowel(char ch)
 {
    ch = toupper(ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
        return 1; 
    }
	 
	else 
	{
        return 0; 
    }
}

int main()
 {
    char ch;

    
    printf("Enter a character : ");
    scanf(" %c", &ch);

    
    if (is_vowel(ch))
	{
        printf("%c is a vowel.\n", ch);
    }
    
	 else
	{
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
	
	

