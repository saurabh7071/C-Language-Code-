
/*

   >>>>> C program without main() function.
	
	
	We can write c program without using main() function. To do so, we need to use
		#define preprocessor directive.
		
	
	***** #define Directive (macro definition) :
	
		You can use the #define directive to define a constant using an expression.
		
		Syntax :
					The syntax for creating a constant using #define in the 
									C language is:
 
					#define CNAME value
						OR
					#define CNAME (expression)
		
		Expression whose value is assigned to the constant. The expression must be 
				enclosed in parentheses if it contains operators.
				
	Note :-
			Do NOT put a semicolon character at the end of #define statements. 
					This is a common mistake.
					
	Example :-
				#define AGE 10
				In this example, the constant named AGE would contain the value of 10.
				
				#define NAME "TechOnTheNet.com"
				In this example, the constant called NAME would contain the 
						value of "TechOnTheNet.com".

										
						
*/		


#include<stdio.h>

#define start main

void start()
{
	printf("NEHA");
}


