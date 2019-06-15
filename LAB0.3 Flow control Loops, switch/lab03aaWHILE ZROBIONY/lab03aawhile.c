#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    
    printf("Specify the number of lines:");
    	scanf("%d" , &counter);
    
    while (counter>=0)
	{
		printf ("-"); counter--;
	}
    
    return 0;
}