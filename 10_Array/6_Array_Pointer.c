

// 	pointer array 


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[]={10,20,30};
	int *ptr[3];
	
	for(int i=0;i<3;i++)
	{
		printf("\n %d",arr[i]);		// it is print the array elements 
	}
	
	printf("\n");
	
	for(int i=0;i<3;i++)
	{
		ptr[i]=&arr[i];			// 	arr[i] == *(arr+i)
		
		printf("\n%d",ptr[i]);	// it is print the address of elements of array
	}

	printf("\n");
	
	for(int i=0;i<3;i++)
	{
		printf("\n %d",*ptr[i]);	// it is further print the array elements 	
	}
	
	return 0;
}