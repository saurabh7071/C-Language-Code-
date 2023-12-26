

/*	Insertion After/Before the Given Index of an Array
		
		In this scenario we are given  a location of an array after which a new data element (value) has to be inserted..
	Only the seek process varies the rest of the activities are the same as in the previous example... 

	It is not applicable for last element ....here, arr[5]
*/

#include<stdio.h>

int main()
{
 	int arr[100]={11,22,33,44,55};
 	
 	int size=5;
 	int index;
 	int new_value=100;
 	
 	printf("\nEnter the index location according the (used_size=5) : ");
 	scanf("%d",&index);
 	
 	printf("\nPrint the elements before insertion :\n");
 	for(int i=0;i<size;i++)
 	{
 		printf("[%d]= %d\n",i,arr[i]);
	}
	
	for(int i=size;i>=index+1;i--) 	// condition for before the given index -> (index-1)  
	{
			arr[i+1]=arr[i];
	}
	
	arr[index+1]=new_value;
 	
 	size++;
 	
 	printf("\nPrint the elements after insertion :\n");
 	for(int i=0;i<size;i++)
 	{
 		printf("[%d]= %d\n",i,arr[i]);
	}
	
	getch();
 	return 0;
}
