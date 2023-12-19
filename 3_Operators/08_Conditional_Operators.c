/*
						Conditional Operator / Ternary Operator :- (?:)
						
	Conditional Operator is a ternary Operator because it works on three operands.
		
-->	The Conditional Operator behaves like an if_else statement.
	
	syntax :-  condition ?  value_if_true: value_if_false
	
	
	
	Conditional Operators in the c language can be used for statements of the form
		it_then_else.
		
	How it works ?
	
		Expression 1 ? Expression 2 : Expression 3 ;
	
	-> The question mark in the syntax represents the if part.
	
	-> The first expression (expression 1) returns either true or false, based on 
		which it is decided whether (expression 2) will be executed or (expression 3).
		
	-> if (expression 1) returns true then the (expression 2) is executed.
	
	-> if (expression 1) returns false then the expression on the right side of :
	    i.e (expression 3) is executed. 	 

*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,max;
	
	printf("Enter the value of a,b and c :");
	scanf("%d %d %d",&a,&b,&c);
	
	max = (a>b)? (a>c?a:c) : (b>c?b:c);
	
	printf("The maximum Number is :%d\n",max);
	
	return 0;
}							