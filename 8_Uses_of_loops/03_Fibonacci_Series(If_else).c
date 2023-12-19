
#include<stdio.h>
#include<conio.h>

int main()
{
	int input,i,f=0,s=1,next;
	
	printf("Enter the User Input :- ");
	scanf("%d",&input);
	
	printf("The Fibonacci Series are : ");
	
	for(i=1;i<=input;i++)
	{
		if(i<1)
		{
			next=1;
		}
		else
		{
			next=f+s;
			
			printf("\t%d",next);
			
			f=s;
			s=next;
		}
	}
	
	return 0;
}