
/* 

				*
			  * *
			*   *
		  *     * 
		*       * 
	  *         * 
	* * * * * * *
	
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
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=m;k++)
		{
			if(k==1 || k==m || m==n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");
		
		m++;
	}
}	  