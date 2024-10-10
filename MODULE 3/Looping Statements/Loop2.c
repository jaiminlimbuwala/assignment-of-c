/*WAP to accept 5 numbers from user and display all numbers*/

#include<stdio.h>
int main()
{
    int i;
    int numbers;

    
    printf("Enter 5 numbers : \n");

    
    for (i = 0; i < 5; i++)
	 {
        printf("Enter the number %d : ", i + 1);
        scanf("%d", &numbers,i);
    }

   
    printf("You entered the following numbers : \n");
    for (i = 0; i <= 5; i++)
	 {
        printf("%d\n", numbers,i);
    }
	return 0;
}
