#include<stdio.h>

void display(int arr[] ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("[%d] = %d\n",i,arr[i]);
	}
}

int indInsertion(int arr[],int size,int value,int capacity,int index)
{
	for(int i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	
	arr[index]=value;
	
	return 1;
}

int main()
{
	int arr[100]={90,91,92,93,94};
	
	int size=5;
	int index;
	int value=77;
	
	printf("\nPrint array elements before insertion :\n");
	display(arr , size);
	
	printf("\nEnter the index location for insertion according to (size=5) : ");
	scanf("%d",&index);
	
	indInsertion(arr,size,value,100,index);
	
	size +=1;
	
	printf("\nPrint array elements After insertion :\n");
	display(arr , size);
	
	return 0;
}