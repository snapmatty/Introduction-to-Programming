#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to the program of LAB05h!\n");
    
    int a,b, x[100], size, y[100], count=1;
    
    printf("Please enter the size of the array:");
    scanf("%d" , &size);
    
    printf("Please enter the elements of the array:");
    for(a=0;a<size;a++)
	{
		printf("\nEnter cell #%d " , a+1 );
		scanf("%2d" , &x[a]);
		
		y[a]=-1;
	}
    
    for(a=0; a<size; a++)
	{
		count=1;
		for(b=a+1; b<size; b++)
		{
			if(x[a]==x[b])
			{
				
			
				count++;
			
				y[b]=0;
			}
		}
	
	
	if(y[a] !=0)
	{
		y[a]=count;
	}
	}
    
    printf("\n\nThe frequency of elements:\n");
    for(a=0; a<size; a++)
	{
		if(y[a] !=0)
		{
			printf("%d appears %d time(s)\n" , x[a], y[a]);
		}
	}
    
    
    return 0;
}