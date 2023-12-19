#include<stdio.h>

char stack[10];
int top = -1;

int push(char item);
int pop();
//void display();

int push(char item)
{
	//char item;
	
	if(top == 9)
	{
		printf("\nStack is full");
	}
	else
	{
		top++;
		stack[top]=item;
	}
}

int pop()
{
	char item;
	
	if(top == -1)
	{
		printf("\nStack is empty");
	}
	else
	{
		item = stack[top];
		top--;
	}
}

int priority(char x)
{
	if(x == '(')
	{
		return 0;
	}
	if(x == '+' || x == '-')
	{
		return 1;
	}
	if(x == '*' || x == '/')
	{
		return 2;
	}
}

int main()
{
 	char expression[20];
 	char *e,x;

 	printf("\nEnter the infix expression : ");
 	scanf("%s",expression);
 	
 	e = expression;
 	
 	while(*e == '/0')
 	{
 		if(isnum(*e))
 		{
 			printf("%c",*e);
		}
		else if(*e == '(')
		{
			push(*e);
		}
		else if(*e == ')')
		{
			while((x = pop()) != '(')
			{
				printf("%c",x);
			} 
		}
		else
		{
			while(priority(stack[top]) >= priority(*e))
			{
				printf("%c",pop());
			}
			
			push(*e);
		}
		
		e++;
	 }
	 
	 while(top != -1)
	 {
	 	printf("%c",pop());
	 }
	 
	 return 0;
}
