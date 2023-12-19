
/* 

					*
				  * * * 
				* * * * * 
			  * * * * * * * 
			* * * *	* * * * *
		  * * * * * * * * * * *
		* * * * * * * * * * * * *
	  * * * * * * * * * * * * * * *
	  
	  
	  
	  				*
				  *   *
				*       *
			  *           *
			*               *
		  *                   *
		* * * * * * * * * * * * *
		      
	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,i,j,k,m;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	m=a;
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=m-1;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		
		m--;
		
		printf("\n");
	}
	
	
	printf("<<<******>>>");
	
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	m=a;
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=m-1;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=2*i-1;k++)
		{
			if(k==1 || k==2*i-1 || i==a)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		
		m--;
		
		printf("\n");
	}
}					