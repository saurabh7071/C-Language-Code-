#include<stdio.h>

int searching(int arr[] , int search_num , int size)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i] == search_num)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int size,search_element;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
 	int arr[size];
 	
 	printf("Enter the elements of an array :\n");
 	for(int i=0;i<size;i++)
 	{
 		scanf("%d",&arr[i]);
	}
	printf("Elements of an array are : ");
	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	printf("Enter the element for searching : ");
	scanf("%d",&search_element);
	
	int result = searching(arr , search_element , size);
		
	if(result == -1)
	{
		printf("Element is not found");
	}
	else
	{
		printf("Element is present at index %d",result);
	}
 	return 0;
}
