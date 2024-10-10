/*Write a C program to accept two integers and check whether they are equalor not*/

#include<stdio.h>
int main()
{
	int num1, num2;

    printf("Enter the First integer : ");
    scanf("%d", &num1);

    printf("Enter the Second integer : ");
    scanf("%d", &num2);

    if (num1 == num2)
    {
    printf("\nThe Two Integers are equal:");
    } 
    else
    {
    printf("\nThe Two Integers are not equal:");
    }
	return 0;
}
