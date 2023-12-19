
/*

				 Multi-Dimensional Array 


	Initialization of a 2d array :
	
				Different ways to initialize two-dimensional array

				int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
         
				int c[][3] = {{1, 3, 0}, {-1, 5, 9}};
                
				int c[2][3] = {1, 3, 0, -1, 5, 9};
				
	Initialization of a 3d array :
	
				int test[2][3][4] = {
    									{{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    									{{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}
									};

			
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};		// 1st square bracket always row	and
	int i,j;								// 2nd square bracket alwasy column 
	
	printf("printing an Array \n\n");		// No. of elements in multi-dimensional array is 
											// [No. of rows] * [No. of column]= No. of elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("\n*************************\n\n");
	
	
	
	int arr[10][10];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elements[%d][%d] of an arrya : ",i,j);
			scanf(" %d",&arr[i][j]);
		}
	}
	
	printf("\nPrinting an array \n\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",arr[i][j]);
		}
		
		printf("\n");
	}
	
	
	
	printf("\n*************************\n\n");
	
	
	
	int array[10][10];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the elements[%d][%d] of an arrya : ",i,j);
			scanf(" %d",&array[i][j]);
		}
	}
	
	printf("\nPrinting an array \n\n");	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",array[i][j]);
		}
		
		printf("\n");
	}
}