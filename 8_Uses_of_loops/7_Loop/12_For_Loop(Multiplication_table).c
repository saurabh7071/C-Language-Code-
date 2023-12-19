
// Write a program to print multiplication table of numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i=0;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}
	
	return 0;
}