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
	 	int i,j,n,k,m=1;
	 	
	 	printf("Enter the Number :");
	 	scanf("%d",&n);
	 	
	 	for(i=1;i<=n;i++)
	 	{
	 		for(j=1;j<=n;j++)
	 		{
	 			if(j>=n+1-i) // conditio :- j>=n+1-i 
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
		
		
	printf("\n<<<<<<*****>>>>>>\n");	
		
		
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=m;k++)
		{
			printf("*");
		}
		
		printf("\n");
		
		m++;
	}
		
		printf("\n<<<<<<*****>>>>>>\n");
		
		
					
}	


