
/*
								Data Structures and Algorithms - Arrays 
								
	 Array is a container which can hold a fix number of itmes and these items should be of the same type...
	
	Elements : Each itmes stored in an array is called an elements..
	Index 	 : Each location of an element in an array has a numerical index, which is used to identify the element..
	
	
	Basic Operations : 
	
		Traverse - Print all the array elements one by one 
		Insertion - Adds an element at the given index 
		Deletion - Delets an element at the given index 
		Search - Searches an element using the given index or by the value 
		Update - Updates an element at the given index
		
*/


// Traverse Operation


#include<stdio.h>

void display(int* arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}

int main()
{
	int arr[100]={1,3,5,7,9};
	
	display(arr,5);
	
	return 0;
}



			 						