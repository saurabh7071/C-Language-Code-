/* 
	1)	Square_star_Pattern  2) Hollow_Square	3) Hollow_Square_with_Digonal
						
		* * * * * *				* * * * * 			* * * * * * * * *  
		* * * * * *				*       * 			* * 		  *	*
		* * * * * *				*       *			*   *       *   *
		* * * * * * 			*       * 			*     *   *     *
		* * * * * *				*       * 			*		*       *
		* * * * * *				*       * 			*	  *   *     *
		* * * * * *				*       *     		*	*		*   *
		* * * * * *				*		*			* *			  * *
		* * * * * *				* * * * *			* * * * * * * * *				
										
*/
	
#include<stdio.h>
#include<conio.h>

int main()
{
	int k,i,n,j;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	printf("\n <<<*********>>> \n ");
	
	
	printf("Enter tha value of n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1 || i==1 || j==n || i==n )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");
	}
	
	
	printf("\n <<<*********>>> \n ");
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n-i+1 || i==j || j==n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");
	}
}






	
