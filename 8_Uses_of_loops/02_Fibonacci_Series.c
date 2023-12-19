
#include<stdio.h>
#include<conio.h>

int main()
{
	int Number,i,num1=0,num2=1,sum;
	
	printf("Enter the Number :-");
	scanf("%d",&Number);
	
	printf("The Fibonacci Series are :");
	
	for(i=1;i<=Number;i++)
	{
		sum=num1+num2;
		
		printf("\t%d",sum);
		
		num1=num2;
		num2=sum;
	}
	
	return 0;
}