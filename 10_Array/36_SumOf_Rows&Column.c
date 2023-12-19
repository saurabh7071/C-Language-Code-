
/*
		Q : Write a program that reads a 5X5 array of integers and then prints the row sum and
			the column sum .
			
			Enter row 1 : 8  3  9   0  10 
			Enter row 2 : 3  5  17  1  1
			Enter row 3 : 2  8  6  23  1
			Enter row 4 :15  7  3  2   9
			Enter row 5 : 6  14 2  6   0
			
			
			Row total 	 : 	30  27  40  36  28
			Column total :	34  37  37  32  21 
			
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[5][5]=	{	
						{8,3,9,0,10}, 
			 			{3,5,17,1,1},
			 			{2,8,6,23,1},
						{15,7,3,2,9},
			 			{6,14,2,6,0}
				  	};
	int i,j;
	int sum=0;
	
	// Row sum 
	
	printf("\nRow Total :\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum += arr[i][j];	
		}	
		
		printf("\n[%d] row : %d",i,sum);
		sum=0;
	}
	
	printf("\n\n**************************");
	// Column sum
	
	printf("\n\nColumn Total :\n");
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			sum += arr[i][j];	
		}	
		
		printf("\n[%d] column : %d",j,sum);
		sum=0;
	}			  			  	
}			 