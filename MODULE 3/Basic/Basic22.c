/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/

#include<stdio.h>
int main()
{
    int amt,cint,a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	
	amt = a*(1 +  b/100) * c;
	
	printf("\nAmount = %d",amt);
	cint = amt - a;
	printf("\tCompound Interest : %d",cint);
	
	return 0;
}
