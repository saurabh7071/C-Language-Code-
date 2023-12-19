#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,l;
	

		for(i=1;i<=10;i++)
		{
			for(j=10;j>=1;j--)
			{
				
				for(l=0;l<=i-1;l++)
				{
					k=i+j;
					printf("%d",k);	
					printf("\n");
				}
			}
		}
}