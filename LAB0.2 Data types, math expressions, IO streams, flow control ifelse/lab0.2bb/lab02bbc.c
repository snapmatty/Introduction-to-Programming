#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float R;
    float x1;
    float x2;
    float y1;
    float y2;
   float x3;
    float y3;
    float xy;
	float Z;
	
	printf("Insert your radius R:\n");
		scanf("%f" , &R);
	printf("Circumference=%.2f\n" , 2*M_PI*R);
	printf("Surface area=%.2f\n" , M_PI*R);
 
    printf("Insert the value of X1\n");
    	scanf("%f" , &x1);
    printf("Insert the value of Y1\n");
    	scanf("%f" , &y1);
	printf("Insert the value of X2\n");
    	scanf("%f" , &x2);
	printf("Insert the value of Y2\n");
    	scanf("%f" , &y2);
    
 	x3=+ pow(x2-x1, 2);
 	y3=+ pow(y2-y1,2);
 	xy=+ x3+y3;
 	Z=+ sqrt(xy);
 	
 	printf("The Cartesian distance between the points is equal to:%.2f\n" , Z);
					
    	
	
	
	
    return 0;
}