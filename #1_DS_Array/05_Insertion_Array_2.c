
// Insertion Operation 

#include<stdio.h>

int indInsertion(int arr[], int size, int new_element, int capacity, int index)
{
	/*if(size>=capacity)
	{
		return 1;
	}*/
	for(int i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=new_element;
	
	return 1;
}

void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);	
	}	
	printf("\n");
}


int main()
{
	int arr[100]={10,20,30,40,50};
	int size=5, new_element =99, index=2;
	int n;
	printf("\nPrint array before insertion : ");
	display(arr,size);
	
	indInsertion(arr,size,new_element,100,size);

	size+=1;
	
	printf("\nPrint array After insertion : ");
	display(arr,size);

	return 0;
}