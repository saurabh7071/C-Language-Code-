
#include<stdio.h>
#include<conio.h>

int main()
{
	 float celsius,farenheit;
	 
	 printf("Enter the Temperature in Celsius :");
	 scanf("%f",&celsius);
	 
	 farenheit=(celsius*9/5)+32;
	 
	 printf("The Temperature in farenheit is :%f",farenheit);
	 
	 return 0;
	 
}