
/*

	Q_5(b) :- program to cheak a number entered by user is perfect number or not.
	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,rem,sum=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		rem=n%i;
		
		if(rem==0)
		{
			sum=sum+i;
		}	
	}
	
	if(sum==n)
	{
		printf("%d is a Perfect Number",n);
	}
	else
	{
		printf("%d is not a Perfect Number",n);
	}
	
	return 0;	
}	
	