#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int x;

    printf("HELLO, WELCOME TO TREE MAKER 101!\n");
    printf("\n\n");
    printf("Please enter the height of your tree:");
    scanf("%d" , &x);
    
    int i, k, j;
  for(i=0; i<x; i++)
  { for(k=0; k<(x-i)-1; k++)
  	  {
  		  printf(" ");
  	  }
  	
  	for(j=0;  j<(i*2)-1; j++)
	  {
	  	
	  	printf("*");
	  	
	  }
	  printf("\n");
  }
 
  for(k=0; k<(x-2); k++)
  	  {
  		  printf(" "); 
  		  
		}
	printf("#");
	
	printf("\n");
	printf("WOW THAT'S A BIG ASS TREE!");
	
	  return 0;
}