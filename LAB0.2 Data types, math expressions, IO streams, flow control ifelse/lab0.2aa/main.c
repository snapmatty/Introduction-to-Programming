#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	float z;
	float v;
	
	
    printf("Enter the number you'd like rounded to the 3rd decimal place:\n");
    	scanf ("%f3" , &z);
    	 getchar();
    	 
 	printf("Enter the number you'd like only the integer part of:\n");
 		scanf ("%d" , &x);
 		 getchar();
 	
 	printf("Enter the number you'd like in scientific notation:\n");
 		scanf ("%g" , &v);
 		 getchar();
 	

 	 	 
	     
 	 printf("\nResult: \n %.3f,\n %d,\n %g," , z, x, v);
 	
	  	  return 0;
}