
/* 		If Statement :- Cheak the condition is true ,then 'if' condition is true, and 
							'if' statement will be executed. 

            Syntax :- 	if(condition)
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
		printf("a is greater");
	}
	
	return 0;	
}

							