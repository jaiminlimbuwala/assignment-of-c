/*Accept marks from user and check pass or fail*/

#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);

	if (marks >=40&& marks<50)
	{
		printf("/*Very Good<^-^>  PASS!*/");
	}	
	else if (marks>=35 && marks<50)
	{
		printf("Good , PASS");
	}
	else if(marks>=46 && marks<50)
	{
		printf("Excellent, PASS");
	}
	else if(marks>=16 && marks<50)
	{
		printf("You are promoted, PASS");
	}
	else if (marks>17 && marks<60)
	{
		printf("you are pass");
	}
	else if(marks<70 && marks>=55)
	{
		printf("PASS");
	}
	else{
		printf("you  are fail");
	}
	return 0;
}
	

