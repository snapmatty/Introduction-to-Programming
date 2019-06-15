#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("program to enter any number from user and find the reverse of given number\n");
    
    int x, y=0, z;
    
    printf("Please enter any number:");
    scanf("%d" , &x);
    
    for(x; x=x; x/=10)
	{
		z=x%10;
		y=y*10+z;
	}
    
    printf("Reversed number= %d" , y);
    
    return 0;
}