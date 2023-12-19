
/*
							While Loop :- 
							
			Syntax :-   While(condition)
					    {	
					    	// statement 
					    	// Increment/Decrement
						}
						
						
	Infinite Loop :- If the condition never becomes false the while loop keep
						getting executed. Such a loop is known as an infinie loop.					
		
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int i=0;
	
	while(i<=10)
	{
		printf("%d\n",i);
		
		i++;
	}
}					   						