/*a. information -print and display empno,
empname, address and age*/

#include<stdio.h>
struct employee{
	int empno;
	int age;
};
int main()
{
	struct employee ep1;
	
	ep1.empno=50;
	char empname[100] = "Jaimin";
	ep1.age=19;
	char address[200]= "Cg road, Ca circle, Ahmedabad";
	
	printf("\n employee no. is :%d",ep1.empno);
	printf("\n employee name is :%s",empname);
	printf("\n employee age is :%d",ep1.age);
	printf("\n employee address is :%s",address);	
	return 0;
	
}
