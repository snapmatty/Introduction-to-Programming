#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, z, a, b, c;
	
    printf("PROGRAM COMPARING TWO CALENDAR DATES.exe\n");
    
    printf("PLEASE ENTER THE 1ST DATE BELOW:\n");
    printf("DAY (DD):");
    	scanf("%2d ",&x);
 	printf("MONTH (MM):\n");
 		scanf("%3d", &y);
    printf("YEAR (YYYY):");
    	scanf ("%4d",  &z);
 		
    printf("\n\n");
    
    printf("PLEASE ENTER THE 2ND DATE BELOW:\n");
    printf("DAY (DD):");
    	scanf("%2d " , &a);
 	printf("MONTH (MM):\n");
 		scanf("%2d" , &b);
    printf("YEAR (YYYY):");
    	scanf ("%4d" ,  &c);
    	
    	if(z>c)
    		printf("The earlier date is:\n" , x, y, z);
    		else
				printf("The earlier date is:\n" , a, b, c);
				if (z = c && y>b)
					
			
    	
    	 getchar(); 
    return 0;
}