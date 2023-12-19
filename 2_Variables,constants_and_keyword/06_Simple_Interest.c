
#include<stdio.h>
#include<conio.h>

int main()
{
	float principal,rate,years;
	float simple_interest;
	
	printf("Enter the principal :");
	scanf("%f",&principal);
	
	printf("Enter the rate :");
	scanf("%f",&rate);
	
	printf("Enter the years :");
	scanf("%f",&years);
	
	simple_interest=(principal*rate*years)/100 ;
	
	printf("Simple interst is :%.3f",simple_interest);
	
	return 0;
	
	
}