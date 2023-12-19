O
/* 
	*********
	*      *
	*	  * 
	* 	 * 
	* 	*
	*  *
	* *
	* 
	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,m=1;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i || i==n)
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