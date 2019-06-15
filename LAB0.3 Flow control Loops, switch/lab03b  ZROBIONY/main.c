#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main( )
{
char key;
int big = 0;
int hmany = 0;


while(key !='k')
	{
		scanf ("%c" , &key);
		if (key >= 'A' && key <= 'Z')
		{
			   big++;	
		}
		hmany++;
	}
 	printf("How many characters were pressed: %d\n" , hmany);
 	printf("How many were capital letters: %d\n" , big);
 	
 	return 0;
 }

