#include<stdio.h>

int main()
{
 	int arr[100],n;
	 
	printf("\nEnter the used_size of an array : ");
	scanf("%d",&n);
	 
	printf("\nEnter the elements of an array :\n");
	for(int i=0;i<n;i++)
	{
		printf("[%d]= ",i);
		scanf("%d",&arr[i]);	 	
	}	
	
	printf("\nPrint the array elements before delete the element :\n");
	for(int i=0;i<n;i++)
	{
		printf("[%d] = %d\n",i,arr[i]);
	}
	
	int index;
	//int size=n;
	
	printf("\n\nEnter the index number for deletion of that element : ");
	scanf("%d",&index);
 	
 	for(int i=index;i<n;i++)
 	{
 		arr[i]=arr[i+1];
	}
	
	n--;
	
	printf("\nPrint the array elements after delete the element :\n");
	for(int i=0;i<n;i++)
	{
		printf("[%d] = %d\n",i,arr[i]);
	}
	
	
}
