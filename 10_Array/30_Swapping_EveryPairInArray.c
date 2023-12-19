
/*
		Q12 : Swapping every pair of adjucent elements in an array

	Before swapping : 
				
		 	   0   1   2   3   4   5
	arr[100]={30  50  60  20  10  80} 
	
	After swapping : 
			
			   0   1   2   3   4   5
			 {50  30  20  60  80  10} 
			 
*/

			 	
#include<stdio.h>

int main()
{
	int arr[1000];
	int n,i,temp;
	
	printf("Enter the size of an array in even number for better result  : ");
	scanf("%d",&n);
	
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	
	for(i=0;i<n;i+=2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	
	printf("\n After the swaping of an array : ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	
	return 0;
}