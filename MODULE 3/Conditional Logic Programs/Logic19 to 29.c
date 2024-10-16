/*Write a program in C to calculate and print the electricity bill of a 
given customer. The customer ID, name, and unit consumed by 
the user should be captured from the keyboard to display the
total amount to be paid to thecustomer. The charge are as follow
:
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 
600
25. @1.50
26. 600 and above but less than
800
27. @1.80
28. 800 and above 29. @2.00*/

#include<stdio.h>
int main()
{
	int customerId;
    char name[200];
    float units, totalAmount;

    printf("Enter Customer ID : ");
    scanf("%d", &customerId);
    printf("Enter Customer Name : ");
    scanf("%s", name); 
    printf("Enter Units Consumed : ");
    scanf("%f", &units);

    if (units <= 350) 
	{
        totalAmount = units * 1.20;
    }
	 else if (units > 350 && units < 600) 
	{
        totalAmount = units * 1.50;
    }
	 else if (units >= 600 && units < 800)
	{
        totalAmount = units * 1.80;
    }
	 else 
	{
        totalAmount = units * 2.00;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Amount: Rs %.2f\n", totalAmount);

	return 0;
}
