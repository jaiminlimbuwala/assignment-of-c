/*Calculate person’s insurance premium based on salary*/

#include<stdio.h>
int main()
{
	float salary;
	float rate;
	float pre;
	printf("\nEnter the person salary = ");
	scanf("%f",&salary);
	if(salary<= 60000)
	{
		pre = 0.15;
	}
	else if (salary>=60000 && salary <= 120000)
	{
		pre = 0.30;
		
	}
	else
	{
		pre = 0.40;
	}
	rate = salary * pre;
	printf("\nYour insurance premium = %.2f",rate);
	
	return 0;
}
