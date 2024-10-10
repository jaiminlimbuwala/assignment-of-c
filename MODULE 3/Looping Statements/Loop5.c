/*WAP to print factorial of given number*/

#include<stdio.h>
int main()
{
	int num,fact,a;

    printf("Enter a number to find factorial : ");
    scanf("%d", &num);

    
    fact = 1;
    for (a = 1; a <= num; ++a) 
	{
        fact *=a;
    }
	
	printf("Factorial of %d is : %d\n", num, fact);

    
	return 0;
}
