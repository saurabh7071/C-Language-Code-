
#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[10];
	
	int n,i,large_element,small_element;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	printf("Enter the elements of an array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	large_element = small_element = arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>large_element)
		{
			large_element = arr[i];
		}
		if(arr[i]<small_element)
		{
			small_element = arr[i];
		}
	}
	
	printf("\nThe largest number is : %d",large_element);
	printf("\nThe smallest number is : %d",small_element);
	
	return 0;
}