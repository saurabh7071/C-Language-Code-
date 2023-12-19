
/*
		Do-While Loop :-  a) executes the code & then checks the condition.
	 					  b) Do-While Loop which executes at least once. 
		
		
		Syntax :  do {
						// Statement 
				      
					    // increment/decrement 
						
					 }while(condition);
					 
					 
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int i=1;
	
	do
	{
		printf("%d\n",i);
		
		i++;
		
	}while(i<=10);
	
	return 0;
}				 