#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    
	printf("Enter the first value of the edge:");
		scanf("%d",&A);
	printf("Enter the second value of the edge:");
		scanf("%d",&B);
	printf("Enter the third value of the edge:");
		scanf("%d",&C);
		
  

  if (A+C<=B || A+B <= C || B+C <= A)
    	printf("No, you can not create a triangle");
    else
	 printf("Yes you can create a triangle! :)\n");
  
   
 
  getchar();
	
    	
}		
