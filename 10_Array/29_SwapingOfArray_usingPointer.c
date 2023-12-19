
//	Q11 : Swap any 2 elements in an array using pointer 

#include<stdio.h>

int main()
{
	int arr[1000];
	int n,i,temp;
	int *p=arr[i];
	
	
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		temp=*p;
		*p=*(p+1);
		*(p+1)=temp;
}
	
	for(i=0;i<n;i++)
	{
		printf("%d",*p);
	}
	
	return 0;
}