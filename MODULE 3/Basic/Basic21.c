/*Accept 2 numbers from user and swap 2 numbers with using 3rd variableand without using 3rd variable*/

#include<stdio.h>
int main()
{
	int x,y,z;
	printf("\nEnter any value:");
	scanf("%d",&x);
	printf("\nEnter any value:");
	scanf("%d",&y);
	
	printf("\n");
	
	printf("\n\tbefore swaping:");
	printf("\nvalue number x : %d",x);
	printf("value number y : %d",y);
	z = x; 
	x = y ;
    y = z ;
	printf("\n\tAfter swapping : ");
	printf("\nvalue number x : %d",x);
	printf("value number  y: %d\n",y);
	
	// without 3rd variable
	
	int m1,m2;
	printf("\n\nEnter any value:");
	scanf("%d/n",&m1);
	printf("Enter any value:");
	scanf("%d",&m2);
	
	printf("\n");
	
	printf("\n\tbefore swaping:");
	printf("\nvalue number x : %d",m1);
	printf("n\tvalue number  y : %d\n",m2);
	m1 = m1 + m2;
	m2 = m1 - m2;
	m1 = m1 - m2;
	printf("\n\tAfter swapping : ");
	printf("\nvalue number x: %d",m1);
	printf("\tvalue number  y : %d",m2);
	
	

	return 0;
}
