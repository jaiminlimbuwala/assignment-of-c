/*Patterns:
A
B C 
D E F
G H I J
K L M N O*/

#include<stdio.h>
int main()
{
	int m, n;
    char ch = 'A'; 
    int rows = 5;
   

    for (m = 1; m <= rows; m++) 
	{
        for (n= 1; n <= m; n++) 
		{
            printf("%c ", ch); 
            ch++;
        }
        
        printf("\n");
    }
	return 0;
}
