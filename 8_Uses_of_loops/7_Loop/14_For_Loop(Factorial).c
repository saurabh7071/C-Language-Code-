	
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,b,factorial=1;
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	for(i=1;i<=b;i++)
	{
		factorial *=i;
	}
	
	printf("The value of factorial of %d is :%d",b,factorial);
	
	return 0;
}