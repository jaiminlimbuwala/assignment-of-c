/*WAP to print Fibonacci series up to given numbers*/

#include<stdio.h>
int main()
{
	int num1 = 0,num2 = 1,num3,digit,a;
	printf("\nEnter digit : ");
	scanf("%d",&digit);

	printf("\n%d\t %d\t",num1,num2);
	for(a=1;a<=digit-2;a++)
	{
		num3=num1+num2;
		printf("%d\t",num3);
		num1=num2;
		num2=num3;
	}
	return 0;
}
