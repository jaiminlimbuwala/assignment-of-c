/*Convert kilometers into meters*/

#include<stdio.h>
int main()
{
	float m,km;
	printf("Enter kilometers to convert into meters:");
	scanf("%f",&km);
	
	printf("After convert %.2f km = %.2f meters",km,km*1000);
	return 0;
}
