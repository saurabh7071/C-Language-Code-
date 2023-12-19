/*

			Case of Decrementing for loop :-
				
				for(i=5;i;i--)
				{
					printf("%d",i);
				}
				
	
	This for loop will keep on running until 'i' becomes 0.
		
	The loop runs in following steps :-
		1) i is initialized to 5
		2) The condition "i" is tested
		3) The code is executed
		4) i is decremented
		5) Condition i is checked & code is executed if its not 0
		6) and so on until i is not 0.


   	Write a program to print n natural numbers in reverse order.
*/

					
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=n;i;i--)
	{
		printf("%d\n",i);
	}
	
	return 0;
}					
					