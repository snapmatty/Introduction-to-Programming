#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;

    printf("Please enter the height in cm:\n");
    scanf("%d" , &number);
    
    if (number > 150 && number <180)
    	printf ("\n\n The height is: AVERAGE");
    if (number < 150)
    	printf ("\n\n The height is: LOW");
    if (number > 180)
    	printf ("\n\n The height is: HIGH");
    fflush(stdin);
    getchar();
}