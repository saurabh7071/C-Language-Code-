

// 	No Argument and No return value

#include<stdio.h>
#include<conio.h>

void value(void);

void main(void)
{
	value();
}

void value(void)
{
	int year =1 , period =5, amount = 5000;
	int inrate = 0.12;
	
	float sum;
	
	sum = amount;
	
	while(year <= period)
	{
		sum = sum * (1 + inrate);
		year = year + 1;
	}
	
	printf("The total amount is %.3f :",sum);
} 