/*WAP to find the largest of three numbers.*/

#include<stdio.h>
int main()
{
	 int x, y, z;

    printf("Enter Three integers : \n");
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    printf("Enter third number : ");
    scanf("%d", &z);

    int largest;
    if (x >= y && x >= z) 
	{
        largest = x;
    }
	 else if (y >= x && y >= z) 
	{
        largest = y;
    }
	 else 
	{
        largest = z;
    }

    printf("The largest number is : %d\n", largest);

	return 0;
}
