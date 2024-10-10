/*Convert minutes into seconds and hours*/

#include<stdio.h>
int main()
{
	int minutes,seconds,hours;
	printf("\nEnter minutes:");
	scanf("%d",&minutes);
	
	hours = minutes / 60;
	seconds = minutes * 60;
	
	printf("\nMinutes you Enter : %d",minutes);
	printf("\nHours it has : %d",hours);
	printf("\nSeconds it has : %d",seconds);
	return 0;
}
