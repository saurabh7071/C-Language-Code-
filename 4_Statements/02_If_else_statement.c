
/*
	If_else Statement :- Cheak the condition is true ,then 'if' condition is true, and 
							'if' statement will be executed.Otherwise else statement 
							will be executed.
							
		Syntax :- 	If(condition)
					{
						// statement(printf)
					}
					else
					{
						// statement (printf)
				    }
				    
				   
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
	printf("Enter the value of a and b :");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{
		printf("a is grater than b");
		
	}
	else 
	{
		printf("b is grater than a");
	}
}
		