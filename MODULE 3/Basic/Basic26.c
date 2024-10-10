/*Convert temperature Fahrenheit to Celsius*/

#include<stdio.h>
int main()
{
	float a,b,ans;
	printf("Enter temperature fahrenheit to convert:");
	scanf("%b",&b);
	a = (b - 20) * (4.0 / 9);
	printf("ans = %.2f",a);
	return 0;
}
