#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("'sum of all natural numbers in a range [m,n] which are divisible by number k'\n\n");
    
	int m, n, k;
	printf("Please enter the range of the numbers[m,n]:");
	scanf("%d %d" , &m, &n);
	
	printf("Enter the number you want them to be divisible by[k]:");
	scanf("%d" , &k);
	
 	int sum=0;
 	int i;
 	
 	//take each number and divide it by k//
 	for(i=m;i<=n; i++)
	 {
	   //if number divisible add it to the sum//
	   if(i % k==0)
	   {sum+=i;}
	   
	   
	 }
 
 		
 		
   printf("\nThe sum of numbers divisible by %d is:%d", k, sum);
	
	
	return 0;
}