

/*	

	Free() Function : 
					 We can use free() function to deallocate the memory....
					 
					 The memory allocated using calloc/malloc is not deallocated automatically...
					 
			Syntax : 
					 free(ptr);	---->	Memory of ptr is released...
					 
		
	Quick quiz : 
				 Write a program to demonstrate the usage of free() with malloc()
				 
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int *ptr1;
	
	ptr = (int*) malloc(6 * sizeof(int));
	
	for(int i=0;i<6;i++)
	{
		ptr1 = (int*) malloc(60000 * sizeof(int));
		
		printf("Enter the value of %d element : ",i);
		scanf("%d",&ptr[i]);
		free(ptr1);		// jo memory allocate huii hoti hai vahi sath me free bhi hoti jati hai...
	}
	
	for(int i=0;i<6;i++)
	{
		printf("\nThe value of %d element is : %d",i,ptr[i]);
	}
	return 0;
}				 			