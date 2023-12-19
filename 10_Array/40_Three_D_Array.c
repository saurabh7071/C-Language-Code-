

#include<stdio.h>

int i,j,k;                       //variables for nested for loop
int num;                         //will hold the value to be replaced

int main()
{
	int arr[2][3][3];            //3D array declaration
	
	printf("enter the values in the array: \n\n");
	for(i=1;i<=2;i++)            //represents block
	{
		for(j=1;j<=3;j++)        //represents rows
		{
			for(k=1;k<=3;k++)    //represents columns
			{
				printf("the value at arr[%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	
	printf("\nprinting the values in array: \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				printf("%d ",arr[i][j][k]);
				if(k==3)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	
	printf("\nenter the block row and column number: \n");
	scanf("%d %d %d ",&i,&j,&k);         //position where we want to update the element
	
	printf("enter the new number you want to update with: ");
	scanf("%d",&num);                 //element to be replaced
	
	arr[i][j][k]=num;                 //element assigned to array position
	
	printf("\narray after updating: \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				printf("%d ",arr[i][j][k]);
				if(k==3)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
