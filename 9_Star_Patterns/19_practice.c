
/*	
		Star pattern : 
		
	        *
		* 	  
		  	*
		*
			* 
		*
		
*/

#include<stdio.h>

int main()
{
	int i,j,row_size;
	printf("\nEnter the size : ");
	scanf("%d",&row_size);
	for(i=1;i<=row_size;i++)
	{
		for(j=1;j<=2;j++)
		{
			if(i % 2 == 1 && j % 2 == 0)
			{
				 	printf("  *");
			}
			else if(i % 2 == 0 && j % 2 == 1)
			{
				printf("*  ");
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
