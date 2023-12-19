
/* 
	Q_10 :- Program to cheak Armstrong Number.
	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,copy,p,c,arm=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	copy=n;
	
	while(n>0)
	{
		p=n%10;
		c=p*p*p;
		arm=arm+c;
		n=n/10;
	}
	
	if(arm==copy)
	{
		printf("It is Armstrong Number");
	}
	else
	{
		printf("It is Not an Armstrong Number");
	}
	
	return 0;
}	