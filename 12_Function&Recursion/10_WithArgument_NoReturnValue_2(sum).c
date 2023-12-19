

//		Function with Argument and without return value.

#include<stdio.h>
#include<conio.h>

void sum(int,int);							// Function Prototype 

int main()
{
	int a,b,result;
	
	printf("You are in main function");
	
	printf("\nEnter the two numbers : ");
	scanf("%d%d",&a,&b);
	
	sum(a,b);								// Actual Arguments
	
	return 0;	
}

void sum(int a,int b)						// Formal Arguments
{
	int add;
	
	printf("Now,you are in sum function");
	
	add = a+b;
	printf("Sum is : %d",add);
}