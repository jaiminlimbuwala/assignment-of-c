/*Accept 5 expense from user and find average of expense*/

#include<stdio.h>
int main()
{
	float exp10 , exp20 , exp30 , exp40 , exp50;
	printf("Enter expense 10 : ");
	scanf("%f",&exp10);
	printf("Enter expense 20 : ");
	scanf("%f",&exp20);
	printf("Enter expense 30 : ");
	scanf("%f",&exp30);
	printf("Enter expense 40 : ");
	scanf("%f",&exp40);
	printf("Enter expense 50 : ");
	scanf("%f",&exp50);
	
	float sum = exp10 +exp20 + exp30 + exp40 + exp50;
	float avg = sum / 5;
	
	printf("sum =%.2f, Average = %.2f",sum,avg);
	return 0;
}
