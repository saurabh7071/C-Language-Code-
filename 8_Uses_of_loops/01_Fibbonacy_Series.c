
/* 
		Fibonacci series :-
		
	 	The Fibonacci Series is a Series of number in which each number
	    is the sum of two procceding numbers

			 a=(0)+b=(1)=c=(1)    c=a+b
			    1 +   1 =   2     a=b
			    1 +   2 =   3     b=c
			    2 +   3 =   5

	    Thus the simplest series is 1,1,2,3,5,8,etc... :) 
							  
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,a=0,b=1,c;
	
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		c=a+b;
		
		printf("\t%d",c);
		
		a=b;
		b=c;
	}
	
	return 0;
}							  
							   
	 						