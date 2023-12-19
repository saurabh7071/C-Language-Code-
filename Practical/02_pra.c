#include<stdio.h>
#include<ctype.h>	// Declares a set of functions to classify ( and transform ) individual characters.  Ex : isupper() 
																					// cheak whether a character is uppercase or not..
int stack[10];
int top= -1;

void push()
{
	int item;
	
	if(top >= stack-1)
	{
		printf("\nStack is Overflow");
	}
	else
	{
		top = top-1;
		
		stack[top] = item;
	}
}

void pop()
{
	int item;
	
	if(top < 0)
	{
		printf("\nStack is Under flow");
	}
	else
	{
		item = stack[top];
		top--;
		return item;
	}
}

void EvalPostfix(char postfix[])
{
	int i,ch,val,A,B;
	
	for(i=0;postfix[i] != ')';i++)
	{
		ch = postfix[i];
		
		if(isdigit(ch))
		{
			push(ch - '0');
		}
		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			A = pop();
			B = pop();
			
			switch (ch)
			{
				case '+':
				{
					val = B+A;
					break;
				}
				case '-':
				{
					val = B-A;
					break;
				}
				case '*';
				{
					val = B*A;
					break;
				}
				case '/';
				{
					val = B/A;
					break;
				}
			}
			
			push(val);
		}
	}
	
	printf("\nResult of expression evaluation : %d",pop());
}

int main()
{
	int i;
	
	char postfix[postfixsize];
	
	printf("Assumption : There are only four oprators (+,-,*,/) in an expression and operand is singal digit only : ");
	
 	printf("\nEnter postfix expression\nPress right parenthesis ')' for end expression : ");
 	for(int i;i<=postfixsize-1;i++)
 	{
 		scanf("%c",&stack[i]);	
 		
 		if(postfix[i] == ')')
 		{
 			break;
		}
	}
 	
 	EvalPostfix(postfix);
 	return 0;
}
