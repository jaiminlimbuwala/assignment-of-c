/*Calculate compound interest*/

#include<stdio.h>
int main()
{
	float p,a,rate;
	int year,compound;
	
	printf("\nEnter the principal amount = ");
	scanf("%f",&p);
	
	printf("\nEnter the rate = ");
	scanf("%f",&rate);
	
	rate = rate / 100;
	
	 printf("\nEnter the value of compound = ");
	 scanf("%d",&compound);
	 
	 printf("\nEnter the value of year =  ");
	 scanf("%d",&year);
	 
	 a = p * pow((1 + rate / compound), compound * year);
	 
	 printf("\nAmount after %f : %f",a,(float)year);
	 
	 
	return 0;
}
