
/* 
	*
	* *
	* * * 
	* * * * 
	* * * * * 
*/
	
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i+1;j++)  //  condtion :- j<i+1 
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	printf("\n<<<<<<*****>>>>>>\n");
	
	
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)  // condtion :- j<=i
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	printf("\n<<<<<<*****>>>>>>\n");
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)  // condtion :- j<=i
		{
			printf("* ");  // spacing di hai star ke bich me 
		}
		
		printf("\n");
	}
	
	
	printf("\n<<<<<<*****>>>>>>\n");
	
	
	for(i=1;i<=n;i++)
	 	{
	 		for(j=n;j>=n+1-i;j--) // condition :- j>=n+1-i
	 		{
			 	printf("*");
			}
			
			printf("\n");
		}
	
}