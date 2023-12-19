
// Function with Argument and with return value


#include<stdio.h>
#include<conio.h>

int sum(int a , int b);

int main()
{
	printf("You are in main function");
	
	int a,b,result;
	
	printf("\nEnter two Numbers : ");
	scanf("%d%d",&a,&b);
	
	result = sum(a,b);
	
	printf("\n\nYou are again in main function");
	
	printf("\nSum is : %d",result);
	
	return 0;
}

int sum(int a , int b)
{
	printf("\nNow, you are in sum function");
	
	int result;
	
	result = a+b;
	
	return result;
}