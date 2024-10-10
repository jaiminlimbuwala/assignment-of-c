/*10.Write a program you have to make a
summation of first and last Digit. (E.g.,
1234 Ans: -5)*/

#include<stdio.h>
int main()
{
	int num, first, last;

    printf("Enter a num : ");
    scanf("%d", &num);
    last = num % 10;
    while (num >= 10) 
    
	{
        num = num / 10;
    }
        first = num;
    int sum = first + last;
    printf("Sum of first and last : %d\n", sum);

	return 0;
}
