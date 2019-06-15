#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to program of LAB05d!\n");
    
    int size, negative=0, positive=0, a[10], i;
    
    printf("Please enter the size of the array:");
    scanf("%d", &size);
    
    printf("Please enter the elements of the array:\n");
    for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
    for(i=0; i<size; i++)
	{
		if (a[i]>=0)
		{
			positive++;
		}
		else
		{
			negative++;
		}
	}
	
	printf("\n\n");
	printf("The amount of positive elements: %d" , positive);
	printf("\nThe amount of negative elements: %d", negative);
    

    return 0;
}