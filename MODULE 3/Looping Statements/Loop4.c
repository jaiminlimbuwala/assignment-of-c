/*WAP to print table up to given numbers*/

#include<stdio.h>
int main()
{
	int a,b;
	start:
	printf("\n Enter any number for multiplication table:");
	scanf("%d",&a);

	for(b=1; b<=10; b++)
	{
		printf("\n %d * b = %d", a,a*b);
	}
	char ans;
	printf("\nDo you Want to continue(y/n)?:");
	scanf(" %c",&ans);
	if(ans=='y' || ans=='Y')
	
	{
		goto start;
	}
	
	else {
		goto end;
	}
	end:
		
		printf("\nThank You For Visiting");
		
	return 0;
}
