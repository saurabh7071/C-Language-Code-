
// Addition of all elements in an array ...


#include<stdio.h>
#include<conio.h>

int main()
{
	int i,sum=0;
	int arr[]={10,20,30,40,50};
	
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	
	printf("The addition of an array is : %d",sum);
	
	
	
	printf("\n\n***************************************\n");
	
	
	
	int a[1000],n,j,total=0;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	//	 for user input
 
	for(j=0;j<n;j++)
	{
		printf("Enter the number[%d] : ",j);
		scanf("%d",&a[j]);
	}
	
	//	 for output 

	for(j=0;j<n;j++)
	{
		total=total+a[j];
	}
	
	printf("\n Addition of array is : %d",total);
	
	return 0;
}