/*pattern.
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *  */

#include<stdio.h>
int main()
{
	 int a, b;
    int rows = 5; 

    for (a = 1; a <= rows; a++) 
	{
        for (b = 1; b <= rows - a; b++) 
		{
            printf("  ");
        }

        for (b = 1; b <= 2 * a - 1; b++) 
		{
            printf("* ");
        }
        printf("\n");
    }

    return 0;

}
