
// Addition of Multi-Dimensional Array 


#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j;
	
	printf("For First Array :\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elements[%d][%d] of an arrya : ",i,j);
			scanf(" %d",&a[i][j]);
		}
	}
	
	printf("\nPrinting First array \n\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		
		printf("\n");
	}
	
	
	
	printf("\n************************************\n\n");
	
	
	printf("\nFor Second Array :\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elements[%d][%d] of an arrya : ",i,j);
			scanf(" %d",&b[i][j]);
		}
	}
	
	printf("\nPrinting Second array \n\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",b[i][j]);
		}
		
		printf("\n");
	}
	
	
	printf("\n************************************\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\n Printing Addition of 2 Arrays :\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",c[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}