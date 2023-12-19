
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,r,arm=0;
	
	printf("Enter the any Number :");
	scanf("%d",&a);
	
	c=a;
	
	do
	{
		r=a%10;
		b=(r*r*r);
		arm=b+arm;
		a=a/10;
	}while(a>0);
	if(c==arm)
	{
		printf("It is an Armstrong Number ");
	}
	else 
	{
		printf("It is not an Armstong Number ");
	}
	
	return 0;
	
}