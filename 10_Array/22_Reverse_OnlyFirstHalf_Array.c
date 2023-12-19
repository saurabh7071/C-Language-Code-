

//	3) Reversing only first half of the elements in an array.

#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[1000];
	int n,i,j,temp;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("The given elements are : ");
	
	for(i=0,j=(n/2)-1;i<n/4;i++,j--)
	{
	
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
	}	
	
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d",i,arr[i]);
	}
	
}