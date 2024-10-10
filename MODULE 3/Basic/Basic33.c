/*C Program to Read Integer and Print First Three Powers (N^1,N^2, N^3)*/
#include<stdio.h>
#include<math.h>
int main()
{
	int b,p1,p2,p3;
	printf("Enter your Integer : ");
	scanf("%d",&b);

	p1 = pow(b,1);	
	p2 = pow(b,2);	
	p3 = pow(b,3);
	printf("The Power for the Integer is : %d", p1);
	printf("\nThe Power for the Integer is : %d", p2);
	printf("\nThe Power for the Integer is : %d", p3);
	
	return 0;
}
