
/*
	
		-->	function without argument and with return value. 

				Function with no arguments means called function (Ex : sum()) does not 
				receive any data from calling function (Ex : main()) 
				
				and 
				
				function with return value means one result will be sent back to the 
				caller function (main()) from the called function (sum())
				
*/				

#include<stdio.h>
#include<conio.h>

int sum();

void main()
{
	printf("\nyou are in main function");
	
	int result;		
	result = sum();
	printf("\nSum is %d",result);
	
	printf("\nyou are again in main function");
}

int sum()
{
	int a,b,result;
	
	printf("\n\nNow you are in sum function");
	
	printf("\nEnter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	result=a+b;  
	
	return result;		// Direct use also return a+b;
}
