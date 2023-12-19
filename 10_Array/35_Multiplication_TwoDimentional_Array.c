

#include<stdio.h>    
#include<stdlib.h> 
 
int main()
{  
	int a[10][10];
	int b[10][10];
	int multi[10][10];
	int i,j,k;
	int row1,column1,row2,column2;
	    
	system("cls");
	
	printf("Accepting First Array\n");
	  
	printf("\nEnter the number of rows of First Array : ");    
	scanf("%d",&row1);
	    
	printf("Enter the number of column of First Array : ");    
	scanf("%d",&column1);  
	
	printf("\n");
	  
	for(i=0;i<row1;i++)    
	{    
		for(j=0;j<column1;j++)    
		{
			printf("Enter the value at position a[%d][%d] : ",i,j);	    
			scanf("%d",&a[i][j]);    
		} 
	}
/*		   
	printf("\nPrinting First Array\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			scanf(" %d",a[i][j]);
		}
		
		printf("\n");
	}
*/	
	
	
	printf("\n********************************\n\n");
	
	
	printf("Accepting Second Array\n"); 
	  
    printf("\nEnter the number of rows of Second Array : ");    
	scanf("%d",&row2);
	
	printf("Enter the number of column of Second Array : ");    
	scanf("%d",&column2);  
	
	printf("\n");
	
	for(i=0;i<row2;i++)    
	{    
		for(j=0;j<column2;j++)    
		{	 
			printf("Enter the value at position b[%d][%d] : ",i,j); 
			scanf(" %d",&b[i][j]);    
		} 
	}
/*	   
	printf("\nPrinting Second Array\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<column2;j++)
		{
			scanf(" %d",b[i][j]);
		}
		
		printf("\n");
	}	
*/	
	
	
	printf("\n********************************\n\n");

	
	if(column1 != row2)
	{
		printf("Multiplication is not possible");
	}
	else
	{	    
		for(i=0;i<row1;i++)    
		{    
			for(j=0;j<column2;j++)    
			{    
				multi[i][j]=0;    
			
				for(k=0;k<column2;k++)    
				{			    
					multi[i][j] = multi[i][j] + (a[i][k]*b[k][j]);    
				}	    
			}    
		}
	    
	//for printing result    
	
		printf("\nPrinting Multiplication of 2 Arrays\n\n");
		for(i=0;i<row1;i++)    
		{    
			for(j=0;j<column2;j++)    
			{	    
				printf("%d\t",multi[i][j]);    
			}
		    
			printf("\n");    
		}
	}
	  
		return 0;  
}  


/*

	step 1	:	c[0][0] = 0
	
	step 2	:	c[0][0] = {a[0][0] * b[0][0]}
	
	step 3	:	{a[0][1] * b[1][0]}
	
	step 4	:	c[0][0] =  c[0][0] + {a[0][1] * b[1][0]}
	
	step 5	:	c[0][0] = {a[0][0] * b[0][0]} + {a[0][1] * b[1][0]}
	
*/
	