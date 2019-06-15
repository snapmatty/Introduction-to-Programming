#include <stdio.h>
#include <stdlib.h>

int main()
{
     int A, B, C;
     
	 printf("Enter the first number:");
	 	 scanf ("%d" ,  &A);
     printf("Enter the second number:");
     	 scanf ("%d" ,  &B);
     printf("Enter the third number:");
     	 scanf ("%d" ,  &C);
     	 
     	 if(A<B && A<C)
     	 	printf ("The smallest number is = %d " , A);
     	 if (B<A && B<C)
     	 	printf ("The smallest number is = %d ", B);
     	 if (C>A && C<B)
     	 	printf ("The smallest number is = %d " ,C);
     	 
  	 printf ("\n\n Press ENTER to close the program.");
  	 fflush(stdin);getchar();
}
