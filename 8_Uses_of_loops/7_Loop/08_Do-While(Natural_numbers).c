
//    Write a programm to print first 'n' natural numbers using do-While loop.


#include<stdio.h>
#include<conio.h>

int main()
{
	int i=1;
	int n;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",i);
		
		i++;
		
	}while(i<=n);
	
	return 0;
}