#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to program of LAB08d!\n");
    
    char string1[30],string2[30],a,b;
    
    printf("Enter your first text below: \n" );
    scanf("%s" , string1);
    printf("\nEnter your second text below: \n");
    scanf("%s" , string2);
    
    
    for(a=0;string1[a]!='\0';a++);
    
    //loop stores size of my string1//

	for(b=0;string2[b]!='\0';++b,++a)
	{
		string1[a]=string2[b];
	}
    
    //this loop combines the two strings//
    
    string1[a]='\0';
    
    printf("\n\n");
    printf("The two strings concatenated: %s",string1);
    
    
    
    
    
    
    
    return 0;
}