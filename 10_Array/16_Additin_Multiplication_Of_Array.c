

//		Addition and Multiplication of Array


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr1[5],arr2[5],arr3[5];
	int i;
	
	printf("Enter the five Elements of first Array :\n");
	for(int i=0;i<5;i++)
	{
				scanf("%d",&arr1[i]);
	}
	
	
	printf("\n");
	
	printf("Enter the Elements of Second Array :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	for(int i=0;i<5;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
	
	printf("Adition of two array :\n");
	for(int i=0;i<5;i++)
	{
		printf("\n%d",arr3[i]);
	}
	
	
	for(int i=0;i<5;i++)
	{
		arr3[i]=arr1[i]*arr2[i];
	}
	
	printf("\nMultiplication of two array :\n");
	for(int i=0;i<5;i++)
	{
		printf("\n%d",arr3[i]);
	}
} 