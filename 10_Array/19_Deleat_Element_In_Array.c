
/* 
	Q3 : Deletes an element at the given index 
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[1000];
	int i,n,position,value;
	
	printf("\n Enter the Numbers of Elements in array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the [%d] Element : ",i);
		scanf("%d",&arr[i]);	
	}	
	
	printf("\n Enter the location where you wish to deleat element : ");
	scanf("%d",&position);	// Enter position is 3 but resultant position is 2 ,, so carefull
							// because here position = position-1 is proceed 
	
	if(position >= n+1)		// user ne dali hui value jab no. of elements se jyada ho tab
	{
		printf("Deletion not possible");
	}
	else
	{
		for(i=position-1;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		
		printf("\nResultant array : ");
		
		for(i=0;i<n;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	
	return 0;
}	