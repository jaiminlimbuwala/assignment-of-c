/*WAP to accept the height of a person in centimeters and
categorize theperson according to their height.*/

#include<stdio.h>
int main()
{
	{
       float height;

       printf("Enter the height in centimeters : ");
       scanf("%f", &height );
    
      if (height < 3.0) 
	  {
          printf("Person is Short\n");
      }
	  else if (height >= 5.0 && height <= 6.0)
      {
          printf("Person is Average Height\n");
      }
	  else if (height > 6.0 && height<= 7.0)
      {
          printf("Person is Tall\n");
      } 
	  else 
	  {
          printf("Person is Very Tall\n");
      }
    }
	return 0;
}
