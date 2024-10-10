/*find the area of a rectangular prism formula : A=2(wl+hl+hw)*/

#include<stdio.h>
int main()
{
	int a,w,h,l,area;
	printf("\nEnter value of w = ");
	scanf("%d",&w);
	printf("\nEnter value of h = ");
	scanf("%d",&h);
	printf("\nEnter value of l = ");
	scanf("%d",&l);
	
	a = w*l + h*l + h*w;
	area = a*2;
	
	printf("\nArea of Rectangular is = %d",area);
	
	return 0;
}
