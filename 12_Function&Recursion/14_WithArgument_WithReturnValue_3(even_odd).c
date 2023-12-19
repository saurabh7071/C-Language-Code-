
// 	Function with Argument and with return value 

// Program to cheak whether a number is even or odd.


#include<stdio.h>
#include<conio.h>

int chek(int num);

void main()
{
	int num,even_odd;
	printf("You are in main function");
	
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	even_odd = chek(num);
	
	printf("\n\nYou are again in main function");
	
	if(even_odd == 0)
	{
		printf("\nThe %d number is even number",num);
	}
	else
	{
		printf("\nThe %d number is odd number",num);
	}
	
}

int chek(int num)
{
	printf("\n\nNow, you are in chek function");
	
	if(num%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}