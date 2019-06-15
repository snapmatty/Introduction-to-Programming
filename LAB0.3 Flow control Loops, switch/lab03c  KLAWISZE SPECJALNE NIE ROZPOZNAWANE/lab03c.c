#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "mykeyboardkeys.h"


int main()
{
    int key;
   
    while(key !=0)
	{
		printf("\n\nPRESS ANY KEY TO BE RECOGNISED:");
		key=getch();
		if('a'<=key  && key <='z')
			printf("This is a lowercase letter");
		else if('A'<=key && key<='Z')
			printf("This is an uppercase letter");
		else if ('0'<=key && key<='9')
			printf("This is a digit");
		else if (key==13)
			printf("This is ENTER");
		else if (key==27)
			printf("This is ESC");
        else if (key==8)
			printf("This is BACKSPACE");
		else if (key== 75 )
			printf("This is LEFT ARROW KEY");
		else if (key==77)
			printf("This is RIGHT ARROW KEY");
		else if (key==83)
			printf("This is DELETE KEY");
	
		
	}
	
	
	return 0;

}