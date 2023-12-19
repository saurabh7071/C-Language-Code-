#include<stdio.h>

int stack[100],choice,n,x,i,top;

void push();
void pop();
void display();

int main()
{
	top =-1;
	printf("\nEnter the size of stack , max = 100 : ");
	scanf("%d",&n);
	
	printf("\n\nSTACK OPERATION USING ARRAY ");
	
	printf("\n\n1.push\t2.pop\t3.display\t4.exit");
	
	do
	{
		printf("\n\nEnter the your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("\nExit point");
				break;
			}	
			default:
			{
				printf("\nPlease enter a valid choice (1/2/3/4)");
			}
		}
	}
		
	while(choice!=4);
		
	return 0;
}

void push()
{
	if(top>=n-1)
	{
		printf("\nSTACK is overflow");
	}
	else
	{
		printf("\nEnter a value to be pushed :");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top<=-1)
	{
		printf("\nSTACK is underflow");
	}
	else
	{
		printf("\nThe popped elements is : %d",stack[top]);
		top--;
	}
}

void display()
{
	if(top>=0)
	{
		printf("\nThe elements in stack : ");
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
			printf("\nPress Next choice : ");
		}
	}
	else
	{
		printf("\nThe stack is empty");
	}
}