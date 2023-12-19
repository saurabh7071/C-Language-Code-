
#include<stdio.h>
#include<conio.h>

int main()
{
	int Number,x,collect=0,r,p;
	
	printf("Enter the Number :");
	scanf("%d",&Number);
	
	x=Number;
	
	while(x>0)
	{
		r=x%10;
		collect=r+(collect*10);
		x=x/10;
	}
	if(Number==collect)
	{
		printf("It is a Palindrom Number ");
	}
	else
	{
		printf("It is not a Palindrom Number ");
	}
	
	return 0;
}