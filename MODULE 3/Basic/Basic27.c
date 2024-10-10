/*Convert days into months*/

#include<stdio.h>
int main()
{
	int days,month,remaining;
	printf("\nEnter the Days :");
	scanf("%d",&days);
	
	month = days/ 31;
	
	printf("\nThe whole months = %d",month);
	remaining = days % 31;
	printf("\tRemaining days = %d",remaining);
	printf("\nDays you enter : %d \nAccording to total month : %d \nthe remaining days :%d",days,month,remaining);
	return 0;
}
