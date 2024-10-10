/*WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo)*/

#include<stdio.h>
int main()
{
	int sum,sub,mul,mod,a1,a2;
	char op;
 	float div;
 	start:
 	printf("\nEnter First number : ");
 	scanf("%d",&a1);
 	printf("\nEnter Second number : ");
 	scanf("%d",&a2);

 	printf("\nselect '+' for addition");
 	printf("\nSelect '-' for substraction");
 	printf("\nselect '*' for multiplication");
 	printf("\nselect '/' for division");
 	printf("\nSelect '%%' for reminder/module");

 	printf("\n Select one option : ");
 	scanf(" %c",&op);

 	switch(op)
 	{
 		case '+':
 			printf("\nYou select the addition : ");
 			sum=a1+a2;
 			printf("%d + %d = %d",a1,a2,sum);
 			break;
 		case '-':
 			printf("\nYou select the substraction : ");
 			sub=a1-a2;
 			printf("%d + %d = %d",a1,a2,sub);
 			break;
 		case '*':
 			printf("\nYou select the substraction : ");
 			mul=a1*a2;
 			printf("%d * %d = %d",a1,a2,mul);
 			break;
 		case '/':
 				 if (a2 != 0) {
                printf("\nYou selected division : ");
                div = (float)a1 / a2;
                printf("\n%d / %d = %.2f\n", a1, a2, div);
            } else {
                printf("\nDivision by zero is not allowed.\n");
            }
            break;
 		case '%' : 
			 		if (a2 != 0) {
                printf("\nYou selected remainder/modulo:");
                mod = a1 % a2;
                printf("\n%d %% %d = %d\n", a1, a2, mod);
            } else {
                printf("\n Division by zero is not allowed.\n");
            }
            break;
 		default:
 			printf("\nEnter the correct option");
	}
	int ans = 'y';
	
 	printf("\nDo you want to continue : ");
 	scanf(" %c",&ans);
 	if(ans == 'y' || ans == 'Y')
 	{
 		goto start;
	 }
	 else{
	 	goto end;
	 }
	 end:
	 	printf("\nThank you");
	 	

	return 0;
}
