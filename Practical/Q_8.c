
/* 
	Q_8 :- Program to print square and factorial of an entered numbers 
			using while loop.
	
*/	

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i=1;
	int square,factorial=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	square=n*n;
	
	printf("\n Square of given Number is %d",square);
	
	
	printf("\n \n***********************\n");
	
	
	while(i<=n)
	{
		factorial=factorial*i;
		
		i++;
	}
	
	printf("\n Factorial of %d is %d",n,factorial);
	
	return 0;
}