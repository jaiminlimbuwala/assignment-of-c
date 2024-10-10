/*WAP to calculate swap 2 numbers with using of multiplication and division.*/
 #include<stdio.h>
 int main()
 {
 	int o,p;
	printf("Enter o:");
	scanf("%d", &o);
	printf("Enter p:");
	scanf("%d", &p);
	
	printf("\n");
	
	printf("o=%d",o);
	printf("\tp=%d",p);
	printf("\n");
		
		o = o * p;
		p = o / p;
		o = o / p;
		
	printf("o=%d",o);
	printf("\tp=%d",p);
	
 	return 0;
 }
