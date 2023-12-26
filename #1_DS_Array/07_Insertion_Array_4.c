/* 
			Insertion at the given index of an array 
			
				In this scenario, we given the exact location (index) of an array where a new data element (value)
			needs to be inserted. First we shall check if the array is full, if it is not, then we shall move all data
			elements from that location one step downward. This will make room for a new data elements...
*/			

#include<stdio.h>

int main()
{
 	int arr[100]={10,20,30,40};
 	
 	int size=4;					// Number of elements in an array 
 	int index;					// Index location to insert new value 
 	int new_element=99;			// new data element to be inserted 
 	
 	printf("\nEnter the index number according to used_size = 4 : ");
 	scanf("%d",&index);
 	
 	printf("\nPrinting an array before insertion :\n");
 	for(int i=0;i<size;i++)
 	{
 		printf("[%d] = ",i);
 		scanf("%d",&arr[i]);
	}
	
	for(int i=size;i>=index;i--)	// Shifting of an elements ...
	{
		arr[i+1]=arr[i];
	}
	
	arr[index]=new_element;
	
	size++;
	
	printf("\nPrinting an array after insertion :\n");
 	for(int i=0;i<size;i++)
 	{
 		printf("[%d] = %d\n",i,arr[i]);
	}
	
 	return 0;
}
