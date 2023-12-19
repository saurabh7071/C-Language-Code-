#include<stdio.h>
#include<conio.h>
#define maxsize
int stack[maxsize];
int top=-1;
int choice,value;

void push();
int pop();
void evaluation(char size);

void push()
{
	if(top >= maxsize-1)
	{
		printf("\nStack is overflow");
	}
	else
	{
		top++;
		stack[top]=value;
	}
}
int pop()
{
	if(top < 0)
	{
		printf("\nStack is Underflow");
	}
	else
	{
		value=stack[top];
		top--;
		return value;
	}
}
void evaluation(char size)
{
	char expression,item;
	for(int i=0;size[i]!=')';i++)
	{
		expression=size[i];
		if(isdigit(ch))
		{
			push(expression-'0');
		}
		else if(expression=='+' || expression=='-' || expresssion=='*' || expression=='/')
		{
			int A=pop();
			int B=pop();
			
			switch(expression)
			{
				case '*':
						item=B*A;
						break;
				case '/':
						item=B/A;
						break;
				case '+':
						item=B+A;
						break;
				case '-':
						item=B-A;
						break;
			}
			push(item);
		}
	}
	printf("\nResult of expression evaluation : %d",pop());
}
int main()
{
 	printf("Here we use 4 operators like + , - , * , / .. and we use right parenthesis for end of expression");
 	char size;
 	char postfix[size];
 	printf("\nEnter the postfix expression : ");
	for(int i=0;i<size-1;i++)
	{
		scanf("%c",&size[i]);
		if(size[i]==')')
		{
			break;
		}
	}
	evaluation(size);
 	return 0;
}
