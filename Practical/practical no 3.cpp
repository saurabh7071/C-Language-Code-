#include<stdio.h>
#include<string.h>
char stack[50];
int top=-1;
void post(char infix[]);
void push(char);
char pop();


int main()
{
 char infix[25];
 printf("\nENTER THE INFIX EXPRESSION = ");
 gets(infix);
 post(infix);
 return 0;
}


void push(char symb)


{
 	if(top>=49)
 {
 	printf("\nSTACK OVERFLOW");
 	return;
 }
 else
 {
 	top=top+1;
 	stack[top]=symb;
 }
}
char pop()
{
 	char item;
 	else
	 return(2);
}
return

void post(char infix[])


{
 	int l;
 	int index=0,pos=0;
 	char symbol,temp;
	char postfix[40];
 	l=strlen(infix);
 	push('#');
 	while(index<l)
 	
 {
 	symbol=infix[index];
	 switch(symbol)
 {
 case '(': push(symbol);
 break;
 case ')': temp=pop();
 while(temp!='(')
 {
 postfix[pos]=temp;
 pos++;
 temp=pop();
 }
 break;
 case '+':
 case '-':
 case '*':
 case '/':
 case '^':
 while(preced(stack[top])>=preced(symbol))
 {
 temp=pop();
 postfix[pos]=temp;
 pos++;
 }
 push(symbol);
 break;
 default: postfix[pos++]=symbol;
 break;
 }
 index++;
 }
 while(top>0)
 {
 temp=pop();
 postfix[pos++]=temp;
 }
 postfix[pos++]='\0';
 puts(postfix);
 return;
}