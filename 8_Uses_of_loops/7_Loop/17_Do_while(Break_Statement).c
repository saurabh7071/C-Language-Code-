
/* 
		The Break Statement :- 
							The break statement is used to exist the loop irrespective
							of whether the condition is true or false.
								Whenever a 'break' is encountered inside the loop, the 
						     control is sent outside the loop.
							 
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int i=0;
	
	do
	{
		printf("The value of i is %d\n",i);
		
		if(i==5)
		{
			break;
		}
		
		i++;
		
	}while(i<10);
		
}							 	