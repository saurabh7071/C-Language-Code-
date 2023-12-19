

#include<stdio.h>
#include<conio.h>

int fact(int n);

int main()
{
	int n,f;
	
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	
	f = fact(n);
	
	printf("\n\nThe factorial of %d is : %d",n,f);	
	
}	

int fact(int n)
{	
	printf("\ncalling factorial(%d)",n);
	
	int i;
	
	if(0)
	{

	}
	else
	{
		return n * fact(n-1);
	}
}	 