/*Write a program to find out the max from given number 
(E.g., No: -1562Max number is 6)*/

#include<stdio.h>
int main()
{
	int num, max , remainder;

    printf("Enter a num : ");
    scanf("%d", &num);
    
    while (num != 0)
	 {
        remainder = num % 20;
        if (remainder > max)
	    {
            max = remainder;
        }
        num = num / 20;
    }
    
    printf("Max number is : %d\n", max);

	return 0;
}
