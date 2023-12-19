/* 
			Right Arrow Star Pattern 
			
			
			* * * * * * * * * * 
			  * * * * * * * * *
			    * * * * * * * * 
			      * * * * * * * 
			        * * * * * * 
			          * * * * * 
			            * * * * 
			              * * * 
			                * * 
			                  * 
			                * *
			              * * * 
					  	* * * *  
					  * * * * *	  
					* * * * * *	  
				  * * * * * * *		  
				* * * * * * * * 		  
			  * * * * * * * * *			  
			* * * * * * * * * * 
			
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,k;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	// Printing the upper part of the pattern..
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=n-i;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	// printing lower part of the pattern.
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i+1;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}

						  
						   