#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    printf("numbers from the keyboard, asking in the meantime a question, display calculated values\n\n");
    
    int x;
    
	printf("Please enter digits below:\n\n");
	scanf("%d", &x);
	
	while(x)
	{
		printf("Do you want to finish? [Y/N]");
		x=getch();
		if('Y')
			{
				printf("The program is finished, press ENTER to continue");
			}
				
			
				
	}
	
	
	
	
	
	return 0;
    
}