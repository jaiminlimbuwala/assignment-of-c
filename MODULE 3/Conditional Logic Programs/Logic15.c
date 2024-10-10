/*.Write a C program to determine eligibility for admission to a
professionalcourse based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55
and Marksin Chem>=50 and Total in all three subject >=190 or 
Total in Maths and Physics >=140 ---- Input the marks obtained
in
Physics :65 Input the marks obtained in Chemistry :51 Input the 
marks obtained in Mathematics :72 Total marks of Maths, Physics
and Chemistry :188 Total marks of Maths and Physics : 137 The
candidate is not eligible.*/

#include<stdio.h>
int main()
{
	int maths,phy,chem,tmpc=0,tmp=0;

	printf("Enter marks of maths : ");
	scanf("%d",&maths);
	printf("\nEnter marks of physics : ");
	scanf("%d",&phy);
	printf("\nEnter marks of chemistry : ");
	scanf("%d",&chem);

	tmpc = maths + phy + chem; //it has to be 150
	tmp = maths + phy;//110
	printf("\n Total in Maths and Physics = %d ",tmp);
	printf("\n  Total in all three subject  = %d ",tmpc);

	if(maths >= 90&& phy>=80 && chem >= 75 && tmp >= 100 && tmpc >= 150)
	{
		printf("\n You are eligible");
	}

	else {
		 printf("\n You are not eligible");
	}
	return 0;
}
