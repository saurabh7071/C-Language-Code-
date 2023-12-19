

//  Q6 : Printing Even Numbers and odd numbers separately.


#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100];
	int n,i;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the array element[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n Even Numbers in the array are : ");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
	
	printf("\n odd Numbers in the array are : ");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
		}
	}
	
	return 0;	
}