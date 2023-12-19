
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,s=0,r;
	
	printf("Enter the Number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);  
		n=n/10;
	}
	
	printf("The reverse Numbers are :%d",s);
	
	return 0;
}