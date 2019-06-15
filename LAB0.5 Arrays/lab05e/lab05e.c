#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to program of LAB05e!\n");
    
    int a,b, x[10], size;
    
    printf("Please enter the size of the array:");
    scanf("%d" , &size);
    
    printf("Please enter the elements of the array:");
    for(a=0;a<size;a++)
	{
		printf("\nEnter cell #%d " , a+1 );
		scanf("%2d" , &x[a]);
	}
    
    printf("Elements repeating are:");
    for(a=0; a<size; a++)
    	for(b=a+1; b<size; b++)
    		if(x[a]==x[b])
    			printf("%d," , x[a]);
    
    
    
    return 0;
}