
/*
	
 							Three-Dimensional Array


	int arr[3][3][3], now it becomes a 3D array.

	1)	int shows that the 3D array is an array of type integer.
	2)	arr is the name of array.
	3)	first dimension represents the block size(total number of 2D arrays).
	4)	second dimension represents the rows of 2D arrays.
	5)	third dimension represents the columns of 2D arrays.
		
			i.e; int arr[3][3][3], so the statement says that we want three such 2D arrays 
			which consists of 3 rows and 3 columns.
	
	
		
	int arr[3][3][3];        //3D array

	block(1)  1 2 3          block(2)  10 11 12          block(3)  19 20 21 
         	  4 5 6                    13 14 15                    22 23 24
         	  7 8 9                    16 17 18                    25 25 27
               3x3                         3x3                         3x3

	
	
	-------->>>>>>	Ways to declare 3D array:
	
	1). int arr[2][3][3];
	
	    //no elements are stored

block(1)  1221 -543 3421          block(2)  654 5467 -878     //all values are
          3342 6543 4221                    456 1567 7890     //garbage values
          -564 4566 -345                    567 6561 2433
                        3x3                              3x3
                        
    2). int arr[2][3][3]={};
	
	  //0 will be stored

block(1)  0 0 0        block(2)  0 0 0
          0 0 0                  0 0 0 
          0 0 0                  0 0 0 
               3x3                    3x3
                    
	
	3). int arr[3][2][2]={0,1,2,3,4,5,6,7,8,9,3,2}
	
	
block(1)  0 1        block(2)  4 5        block(3)  8 9
          2 3                  6 7                  3 2
             2x2                  2x2                  2x2
	
	
	4). int arr[3][3][3]=
						{ {{10,20,30},{40,50,60},{70,80,90}},
						{{11,22,33},{44,55,66},{77,88,99}},
						{{12,23,34},{45,56,67},{78,89,90}}
														 };
														 
	int arr[3][3][3]=
         { {{10,20,30},{40,50,60},{70,80,90}},    //elements of block 1
           {{11,22,33},{44,55,66},{77,88,99}},    //elements of block 2
           {{12,23,34},{45,56,67},{78,89,90}}     //elements of block 3
         };

block(1)  10 20 30        block(2)  11 22 33        block(3)  12 23 34
          40 50 60                  44 55 66                  45 56 67
          70 80 90                  77 88 99                  78 89 90
                  3x3                       3x3                       3x3
	
	
	
	------------>>>>>>>		Inserting values in 3D array:
	
		In 3D array, 
					if a user want to enter the values then three for loops are used.

				First for loop represents the blocks of a 3D array.
				Second for loop represents the number of rows.
				Third for loop represents the number of columns.												 
*/			

#include<stdio.h>

int i,j,k;                         //variables for nested for loops
int main()
{
	int arr[2][3][3];              //array declaration
	
	printf("enter the values in the array: \n");
	for(i=1;i<=2;i++)              //represents block
	{
		for(j=1;j<=3;j++)          //represents rows
		{
			for(k=1;k<=3;k++)      //represents columns
			{
				printf("the value at arr[%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	
	printf("\n\nprinting the values in array: \n");
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
