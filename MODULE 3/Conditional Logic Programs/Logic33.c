/*WAP to input the week number and print week day.*/

#include<stdio.h>
int main()
{
	int WeekNumber;

    printf("Enter the week number (1-7) : ");
    scanf("%d", &WeekNumber);

    switch (WeekNumber) 
	{
        case 1:
            printf("Weekday : Sunday\n");
            break;
            
        case 2:
            printf("Weekday : Monday\n");
            break;
            
        case 3:
            printf("Weekday : Tuesday\n");
            break;
        case 4:
        	
            printf("Weekday : Wednesday\n");
            break;
        case 5:
        	
            printf("Weekday : Thursday\n");
            break;
        case 6:
        	
            printf("Weekday : Friday\n");
            break;
        case 7:
        	
            printf("Weekday : Saturday\n");
            break;
            
        default:
            printf("Invalid WeekNumber. Please enter a number between 1 and 7.\n");
            break;
}
	return 0;
}
