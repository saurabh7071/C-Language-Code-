#include<stdio.h>

void Sorting(int arr[],int size)
{
	int temp;
	for(int i=1;i<size;i++)
	{
		temp = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}
void PrintList(int arr[],int size)
{
	printf("\nSorted list is : ");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int size;
	
 	printf("Enter the size of list : ");
 	scanf("%d",&size);
 	
	int arr[size];
 	
	printf("\nEnter the Elements for Sorting in list : ");
 	for(int i=0;i<size;i++)
 	{
 		scanf("%d",&arr[i]);	
	}
	
	//size = sizeof(arr)/sizeof(arr[0]);
	
	Sorting(arr,size);
	PrintList(arr,size);
 	return 0;
}
