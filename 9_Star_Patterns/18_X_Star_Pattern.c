
/* 

			X - Star Pattern 
			
			
			
			*       *
			 *     *
			  *   *
			   * *
			    *
			   * *
			  *   *
			 *     * 
			*       *
			
			
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,m,i,j;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	m=2*n-1;
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i==j || j==(m-i+1))
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
	
	printf("\n***************************\n");
	
	int a,b,k,p;
	
	printf("Enter the number : ");
	scanf("%d",&a);
	
	b=2*a-k;
	
	for(k=1;k<=b;k++)
	{
		for(p=1;p<=b;p++)
		{
			if(k==p || p==(b-k+1))
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
	
	return 0;
}

			