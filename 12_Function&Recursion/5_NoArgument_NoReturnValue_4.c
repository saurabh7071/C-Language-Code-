

#include<stdio.h>

void prime_number();

void main()
{
	prime_number();
}

void prime_number()
{
	int n,i,count=0;
	
	printf("Enter a positive integer :");
	scanf("%d",&n);
	
	if(n==0 || n==1)
	count = 1;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i == 0)
		{
			count = 1;
			break;
		}
	}
	
	if(count == 1)
	{
		printf("%d is not a prime number",n);
	}
	else
	{
		printf("%d is a prime number",n);
	}
}