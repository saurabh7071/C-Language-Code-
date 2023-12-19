
/*
		For Loop :- 
					
		Syntax :- 
					for( initialization ; condition ; increment/decrement )
					{
						// statement
					}
					
					
	 Initialize :- Setting a loop counter to an initial value.
	 condition :- Cheaking a condition.
	 Increment :- Updating the loop counter.				
					
*/	


#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
	}
	
	return 0;
}