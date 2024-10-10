/*Accept 5 employees name and salary and count average and total salary*/

#include<stdio.h>
int main()
{
	float emp1 , emp2 , emp3 , emp4 , emp5;
	printf("Enter emp1 : ");
	scanf("%f",&emp1);
	printf("Enter emp2 : ");
	scanf("%f",&emp2);
	printf("Enter emp3 : ");
	scanf("%f",&emp3);
	printf("Enter emp4 : ");
	scanf("%f",&emp4);
	printf("Enter emp5 : ");
	scanf("%f",&emp5);
	
	float sum = emp1 + emp2 + emp3 + emp4 + emp5;
	float avg = sum / 5;
	
	printf("sum = %.2f, Average = %.2f",sum,avg);

	return 0;
} 
