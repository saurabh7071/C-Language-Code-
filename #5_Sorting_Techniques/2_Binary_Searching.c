
// Implementation of Recursive binary search 

#include<stdio.h>

// A recursive binary search function, it returns location of search_element in given arr[start,...............,end] is present 
int binary_search(int arr[],int start,int end,int search_element)
{
	if(end >= start)
	{
		int mid = (start+end)/2;
		
		if(arr[mid] == search_element)	// if element is present at the middle then return direct present location of element 
		{
			return mid;
		}
		else if( arr[mid] > search_element)	// if mid element is greater than search_element then set the end at mid-1 position i.e left subarray 
		{
			binary_search(arr , start , mid-1, search_element);
		}
		else							// else set the start at mid+1 position i.e right subarray 
		{
			binary_search(arr , mid+1 , end , search_element);
		}
	}
	else
	{
		return -1;			// otherwise -1 when element is not present in array 
	}
}
int main()
{
	int size,search_element;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter the elements of an array :\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Elements of an array are :\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	printf("Enter the element for search : ");
	scanf("%d",&search_element);
	
	int result = binary_search(arr ,0,size-1,search_element); 
	
	if(result == -1)
	{
		printf("\nElement is not found");	
	}	
	else
	{
		printf("Element is found at %d index position",result);
	}
 	return 0;
}
