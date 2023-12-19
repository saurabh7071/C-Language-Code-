
/* 

	Q4 : Reversing 
	
			1) Printing an array in reverse order.
			2) Reversing the elements in an array.
			3) Reversing only first half of the elements in an array.
			
*/


//		Answer of 1st Question 


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[1000];
	int n,i;
	
	printf("\n Enter the size of an array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the array element[%d] : ",i);
		scanf("%d",&arr[i]);
	}	
	
	printf("The Reverse order of an array is : ");
	
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",arr[i]);
	}
	
	return 0;
}			