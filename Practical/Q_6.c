
/* 
	Q_6 :- Program to find maximum and minimum between two numbers given by user
			using if-else and conditional Operators.
			
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,max;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("\n a is Greater than b");
	} 
	else
	{
		printf("\n b is Greater than a");
	}
	
	printf("\n \n********************************\n");
	
	
	max=(a>b) ? a : b ;
	
	printf("\n The maximum number is %d",max);
}			