

//	Sorting of array 

#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[5];
	int i,j,temp;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the array elements[%d] : ",i);
		scanf("\n%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\n Array elements in desending order is : ");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}