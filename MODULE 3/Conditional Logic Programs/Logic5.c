/*Check Number Is Positive or Negative*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);

	if(num>0)
	{
		printf("The number you have printed is positive.");

	}
	else{
		printf("The number you have printed is negative.");
	}
	return 0;

}
