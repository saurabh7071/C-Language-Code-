
/*

									Insertion Operation
									
	-> Insertion at the beginning of an array 
	-> Insertion at the given index of an array
	-> Insertion after the given index of an array 
	-> Insertion before the given index of an array  

*/

 	
	 						// Insertion Operation for 1st arr[0] element ....

#include<stdio.h>

int main()
{
	int arr[100],n;
	
	printf("\nEnter the used_size of an array : ");
	scanf("%d",&n);
	
	printf("\nEnter the elements in array :\n");
	for(int i=0;i<n;i++)
	{
		printf("[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	int value = 50;  // New data element to be stored in array 
	
	printf("\nPrint array before insertion : ");
	for(int i=0;i<n;i++)
	{
		printf("\t[%d]=%d",i,arr[i]);
		
	}
	
	for(int i=n;i>=0;i--)	
	{
		arr[i+1]=arr[i];		// Logic 
	}
	
	arr[0]=value;				// we will assigne new value in 1st index 
	
	n++;						// ye bhulna nahi hai ,, size badhana important hota hai .....n+=1
	
	printf("\n\nPrint array After insertion : ");
	for(int i=0;i<n;i++)
	{
		printf("\t[%d]=%d",i,arr[i]);
	}
	
	return 0;
}