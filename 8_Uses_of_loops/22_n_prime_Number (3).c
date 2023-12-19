

/*
	Program to print n prime numbers.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	printf("\n Prime number is : ");
	
	for(i=2;i<=n;i++)
	{
		int count=0;
		
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		
		if(count==2)
		{
			printf("%d ",i);
		}
	}
	
}