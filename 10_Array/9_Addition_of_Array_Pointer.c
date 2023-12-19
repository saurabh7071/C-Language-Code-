

//		Addition of Pointer Array 


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[5];
	int *ptr[5];
	int i,total=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the Elements[%d] of Array : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		ptr[i]=&arr[i];
		
		printf("\n The Elements[%d] of array are :%d ",i,*ptr[i]);
		
		total = total + *ptr[i];
	}
	
	printf("\n");
	
	printf("\n Addition of total Elements of array is :%d",total);
	
	return 0;
}