

//	Sorting of array


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[5];
	int i,j,temp;
	
	for(i=0;i<5;i++)
	{
		printf("Enter [%d]array Elements : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])		// For decending order 
			{						//  arr[i] < arr[j]
				temp=arr[i];		//  Remaining code is same , as it is 
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\n Array Elements in assending order :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
		
	}
	
	return 0;
}