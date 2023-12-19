
/*
	
	malloc() function : 
							malloc stands for memory allocation...
							It takes number of bytes to be allocated as an input and returns a pointer
							of type void ......							
												
				Syntax : 
							ptr = (int*) malloc (30 * size of(int))
									|			  |			\
									|			  |			 \---------->	returns size of 1 int 
									|		Space for 30 ints 
									|			
							casting void pointer 
								  to int
								  
			The expression returns a null pointer if the memory cannot be allocated....					
								  
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	
	ptr = (int*) malloc(6 * sizeof(int));	// malloc return void pointer...
	
	for(int i=0;i<6;i++)	// After dynamically memory allocation we can use as a array.... 
	{
		printf("Enter the value of %d element : ",i);
		scanf("%d",&ptr[i]);
	}	
	
	for(int i=0;i<6;i++)
	{
		printf("\nThe value of %d element is : %d",i,ptr[i]);
	}	
	
	return 0;
}				


// Here ,, The memory is allocated dynamically....				   