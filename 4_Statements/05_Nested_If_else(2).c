
#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y;
	
	printf("Enter the value of x and y :");
	scanf("%d %d",&x,&y);
	
	if(x!=y)
	{	
		if(x>y)
		{
			printf("x is greater than y");
		}
		else
		{
			printf("y is greater than x");
		}
	}
	else
	{
		printf("x is equal to the y");
	}
	
}