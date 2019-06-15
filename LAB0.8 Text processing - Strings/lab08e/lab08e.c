#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to program of LAB08e!!\n");

	char string[100];
	int a;
	
	printf("Enter your text that below: \n");
	gets(string);
	
	
	for(a=0;string[a]!='\0';a++)
	{
		
		if(string[a]>='a' && string[a]<='z')
		{
			string[a]=string[a]-32;
		}
		
		
	}
	
	printf("Your text in uppercase letters: \n %s" , string);
	
	


    return 0;
}