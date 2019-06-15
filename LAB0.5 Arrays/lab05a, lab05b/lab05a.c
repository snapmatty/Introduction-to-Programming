#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to program LAB05a!\n");
    
    int N, a[10], i;
    
    printf("Please specify the amount of real numbers:");
    scanf("%d" , &N);
    
    
    printf("Now, please specify amount of cells in array:");
    for(i=0; i<N;i++)
	{
		printf("\nEnter cell number:#%d " , i+1);
		scanf("%d" , &a[i]);
	}
    
    
    printf("\nThe array content:\n");
    
    for(i=0; i<N; i++)
	{
		printf(" cell[%d] =%d\n" , i+1, a[i]);
	}
    
    float sum=0;
    for(i=0; i<N; i++)
	{
		sum=sum+a[i];
	}
    printf("The sum of the array elements is: %lf" , sum);
    
    int max=a[0], position=0;
    for(i=1; i<N; i++)
	{
		max=a[i];
		position=i;
	}
    
    printf("\nThe biggest value is: %d" , max);
    
    int min=a[0];
    for(i=1; i<N; i++)    
	{
		if(min>a[i]);
	}
    printf("\nThe minimum value is: %d" , min); 
    return 0;
}