
/*
									  ** STACK **
									  
	Stack : Stack is collection of data itmes where the insertion and deletion take place on one end, 
				called top of the stack.....
				
			-->	In stack we can perform two operations i.e  push and pop...
				
					* Push : Push means insertion a new itms into the stack.
					* Pop : Pop means deleting an item form the stack.
			
			--> Stack always perform FILO and LIFO operations...
			
					* FILO - First in Last out.
					* LIFO - Last in first out.
					
			--> A stack can represent by the help of Array and Linked list...
	
			--> Example :                 [ A   B   C   D   _   _   _ ]
											0   1  	2	3	4   5	6
											
											
											Top = 3 
											N(maximum_stack)=5
													
	Overflow : When the value of a variable exceeds from its range then, this concept is known as overflow ..
	
	Undrflow : 
	
*/	

#include<stdio.h>

int stack[100],choice,array_size,x,i,top;

void push();
void pop();
void display();

int main()
{
	top =-1;
	
	printf("\nEnter the size of stack , max = 100 : ");
	scanf("%d",&array_size);
	
	printf("\n\nSTACK OPERATION USING ARRAY\n");
	
	printf("\n1.push\t2.pop\t3.display\t4.exit");
	
	do
	{
		printf("\n\n-> Enter the your choice : ");
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
	if(top>=array_size-1)
	{
		printf("\n** STACK is overflow **");
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
		}
	}
	else
	{
		printf("\nThe stack is empty");
	}
}