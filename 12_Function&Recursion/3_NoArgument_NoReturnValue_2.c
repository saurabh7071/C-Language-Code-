
		
	//	Function without arguments and without return value. 

	
#include<stdio.h>
#include<conio.h>

void add();								// Function declaration 
void sub();

int main()
{
	printf("You are in main function");
	
	add();								// Function Calling 
	sub();
	
	printf("\n\nNow You are again in main function");
}

void add()								// Function definition 
{
	int a,b,c;							// Variable declaration 
	
	printf("\n\nNow You are in add function");
		
	printf("\nEnter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	
	printf("\nAddition of %d and %d is : %d",a,b,c);
}	

void sub()
{
	int a,b,c;							// Variable declaration 
	
	printf("\n\nNow You are in Sub function");
		
	printf("\nEnter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	c=a-b;
	
	printf("\nSubstraction of %d and %d is : %d",a,b,c);
}