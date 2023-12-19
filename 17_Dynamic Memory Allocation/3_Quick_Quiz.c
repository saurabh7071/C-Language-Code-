
/*	
	Quick Quiz : 
					Write the program to create a dynamic array of 5 floats using malloc()
					
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float *ptr;
	
	ptr = (float*) malloc(5 * sizeof(float));
	
	for(int i=0;i<5;i++)	// After dynamically memory allocation we can use as a array.... 
	{
		printf("Enter the value of %d element : ",i);
		scanf("%f",&ptr[i]);
	}	
	
	for(int i=0;i<5;i++)
	{
		printf("\nThe value of %d element is : %.3f",i,ptr[i]);
	}	
	
	return 0;
}					