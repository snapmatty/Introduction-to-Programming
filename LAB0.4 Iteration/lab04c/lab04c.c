#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("program using iterative loop to calculate the series 1/x+1/x^2+...+1/x^n\n");
    
    int a, b, x;
    float sum=0;
    
    
    printf("Specify the integer 'x' in your series:");
    scanf("%d", &x);
    printf("Please enter the amount of elements in your series:");
    scanf("%d", &b);
    
    for(a=1;a<=b;a++)
	{
		sum+=pow(1.0/x,a);
		
	}
    printf("The result of series is:%f", sum);
    
    
    return 0;
}