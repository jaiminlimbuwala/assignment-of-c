/*Patterns:
1 
1 0
1 0 1
1 0 1 0
1 0 1 0 1 */

#include<stdio.h>
int main()
{
	 int a,b ;
    int rows = 5; 


    for (a = 1; a <= rows; a++) 
	{
        for (b = 1; b <= a; b++) 
		{
            if (b % 2 == 0)
		 {
                printf("0 ");
            } 
			else 
			{
                printf("1 ");
            }
        }
       
        printf("\n");
    }
	return 0;
}
