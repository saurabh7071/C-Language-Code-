
/*
		Calloc() function : 
							calloc stands for continuous allocation...
							It initializes each memory block with a default value of 0
							
				Syntax : 
							ptr = (float*) calloc(30 , sizeof(float));
											  |
											  |
											  |
										Allocates continuous space in 
										memory for 30 blocks(float)
										
										
			If the space is not sufficient, memory allocation fails and a NULL pointer is returned..
			
			
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int n;
	
	printf("How many integers do you want to enter : ");
	scanf("%d",&n);
	
	ptr = (int*) calloc(n,sizeof(int));
	
	for(int i=0;i<n;i++)	 
	{
		printf("Enter the value of %d element : ",i);
		scanf("%d",&ptr[i]);
	}	
	
	for(int i=0;i<n;i++)
	{
		printf("\nThe value of %d element is : %d",i,ptr[i]);
	}	
	
	return 0;
}												  