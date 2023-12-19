

//	2) Reversing the elements in an array.


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
	
	printf("After Revesing the array : ");
	
	for(i=0,j=n-1;i<n/2;i++,j--)
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