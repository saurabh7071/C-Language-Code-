
#include<stdio.h>
#include<conio.h>

int main()
{
	float tax,income;
	
	printf("Enter the your income :");
	scanf("%f",&income);
	
	if(income>=250000 && income<=500000)
	{
		tax=tax+0.05*(income-250000);
	}
	if( income>=500000 && income<=1000000)
	{
		tax=tax+0.20*(income-500000);
	}
	if( income>=1000000)
	{
		tax=tax+0.30*(income-1000000);
	}
	
	printf("your net income tax to be paid this month is :%f \n",tax);
}