#include<stdio.h>
#include<conio.h>
int stack[100];
int top=0;
int size,choice,value;

void push();
void pop();
void display();

void push()
{
	if(top >= size)
	{
		printf("\nStack is Overflow");
	}
	else
	{
		printf("Enter the element of insert : ");
		scanf("%d",&value);
		top++;
		stack[top]=value;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\nStack is Underflow");
	}
	else
	{
		printf("\nThe poped element is :%d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\nThe element is stack : ");
		for(int i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
	else
	{
		printf("\nThe stack is empty");
	}
}
int main()
{
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	printf("\nStack Operations using Array\n1.push_operation\n2.pop_oepration\n3.display\n4.Exit");
	while(1)
	{
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
				case 1:
						push();
						break;
				case 2:
						pop();
						break;
				case 3:
						display();
						break;
				case 4: 
						printf("Exit point");
						break;
				default:
						printf("Please Enter the correct choice");
		}	
	} 	
 	return 0;
}
