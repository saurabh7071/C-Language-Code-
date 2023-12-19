
/* 	
	Nested If_else :-When an if else statement is present inside the body of another 
						“if” or “else” then this is called nested if else. 
						
		Syntax :-	if(condition) 
					{
    					//Nested if else inside the body of "if"
    				
						if(condition2) 
						{
       						//Statements inside the body of nested "if"
    					}
    				
						else 
						{
       						//Statements inside the body of nested "else"
    					}
					
					else 
					{
    					//Statements inside the body of "else"
					}	\
				}
				
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	
	printf("Enter the value of a,b and c :");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater");	
		}	
		else
		{
			printf("c is greater");
		}
    }
	else
	{
		if(b>c)
			{
				printf("b is grater");
			}
			else
			{
			printf("c is grater");
			}
	}	
}				