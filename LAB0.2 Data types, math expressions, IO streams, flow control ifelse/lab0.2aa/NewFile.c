#include <stdio.h>
#include <stdlib.h>

int main()
{
   	 float x;
	float z;
	float v;
	
	
    printf("Enter the number you'd like rounded to the 3rd decimal place:\n");
    	scanf ("%f3" , &z);
    	 getchar();
    	 
 	printf("Enter the number you'd like only the integer part of:\n");
 		scanf ("%f" , &x);
 		 getchar();
 	
 	printf("Enter the number you'd like in scientific notation:\n");
 		scanf ("%g" , &v);
 		 getchar();
 	

 	 	 
	     
 	 printf("\nResult: \n %.3f,\n %.0f,\n %g," , z, x, v);
 	
	  	  return 0;
}