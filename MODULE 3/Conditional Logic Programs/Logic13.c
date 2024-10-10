/*13.WAP to find minimum number among 3 numbers using ternary operator*/

#include<stdio.h>
int main()
{
	int min=35625,num1,num2,num3;
		printf("Enter num1 = ");
  		scanf("%d", &num1);
  		printf("\nEnter num2 = ");
  		scanf("%d", &num2);
  		printf("\nEnter num3 = ");
  		scanf("%d", &num3);

  		min= (num1<num2 && num1<num3) ? num1:
		(num2<num1 && num2<num3) ? num2 :num3;
  		printf("%d is smallest ", min);

	return 0;
}
