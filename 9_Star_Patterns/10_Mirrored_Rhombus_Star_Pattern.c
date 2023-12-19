
/* 

	* * * * * 				* * * * *		
	  * * * * *				  *       *       
	    * * * * *				*       *         
	      * * * * * 			  *       * 
	        * * * * *	            *       * 
	          * * * * *				  * * * * * 
	          
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,k;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=n;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	printf("\n <<<*****>>> \n");
	
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=n;k++)
		{
			if(i==1 || i==n || k==1 || k==n)
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

	          
	          