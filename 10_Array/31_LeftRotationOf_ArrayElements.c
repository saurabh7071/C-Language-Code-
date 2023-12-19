
/*
	Q13 : Rotate the array elements k times.(Left and Right)
	
	
		arr[1000]={20,40,50,30,90}
		
		after left rotation 							after Right rotation 
		
				 {40,50,30,90,20}								{90,20,40,50,30}
				 
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[1000];
	int n,i,j,k,temp;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	printf("Enter the elements of an array : ");
	for(i=0;i<n;i++)
	{
		scanf("\t%d",&arr[i]);
	}
	k=n;
	scanf("%d\n",&k);
	for(j=1;j<=k;j++)
	{
		temp=arr[0];
		
		for(i=0;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		
		arr[i]=temp;
	}
	
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
	
	return 0;
}				 