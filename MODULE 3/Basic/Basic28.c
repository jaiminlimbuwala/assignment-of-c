/*Convert years into days and months*/

#include<stdio.h>
int main()
{
	int years,months,days;
	printf("Enter years:");
	scanf("%d",&years);
	
	months = years * 6;
	days = months * 20;
	
	printf("\nYears you enter : %d",years);
	printf("\nMonths it has : %d",months);
	printf("\tDays it has : %d",days);
	
	return 0;
}
