

// Traversal Array - Print all the array elements one by one...  

#include<stdio.h>

int main()
{
	int array[100];
	int n;
	
	printf("\nEnter the used_size of an array: ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(int i=0;i<n;i++)
	{
		printf("Enter the element of an array [%d] : ",i);
		scanf("%d",&array[i]);
	}
	
	printf("\nEntered elements are : ");
	for(int i=0;i<n;i++)
	{
		printf("\n[%d] = %d ",i,array[i]);
		
	}
}
