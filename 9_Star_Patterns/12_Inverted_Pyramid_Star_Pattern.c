
/* 
		* * * * * * * * * * * * * 
		  * * * * * * * * * * *
		   * * * * * * * * * 
		     * * * * * * *
			   * * * * *
			     * * *
				   *
				   
		
		* * * * * * * * * * * * * 
		 * 					  *
		   * 				* 
		     *            *
			   *        *
			     *    *
				   *
				   
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,k,m=1;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<m;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		
		m++;
		
		printf("\n");
	}
	
	
	
	printf("\n <<<********>>> \n");
	
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=m;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=2*i-1;k++)
		{
			if(k==1 || k==2*i-1 || i==n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		m++;
		
		printf("\n");
	}
	
}	


			   		   
				   
		    