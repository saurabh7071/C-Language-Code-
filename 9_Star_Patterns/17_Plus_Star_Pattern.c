
/* 

			Plus Star Pattern 
			
			
					+
					+ 
					+ 
			  + + + + + + + 
					+ 
					+ 
					+
					
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j;
	
	printf("Enter value of n in Odd numbers for better result : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==((n/2)+1))
		{
			for(j=1;j<=n;j++)
			{
				printf("+");
			}
		}
		else
		{
			for(j=1;j<=n/2;j++)
			{
				printf(" ");
			}
			
			printf("+");
		}
		
		printf("\n");
	}
	
	return 0;
}

					