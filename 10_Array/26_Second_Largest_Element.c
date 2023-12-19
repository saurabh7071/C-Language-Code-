

// Q8 : 2nd largest element in an array.


#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main()
{
	int arr[1000];
	int n,i,int_min;
	int l1=int_min;
	int l2=int_min;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	printf("Enter the elements of an array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>l1)
		{
			l2=l1;
			l1=arr[i];
		}
		else
		{
			if(arr[i]>l2 && arr[i]<l1)
			{
				l2=arr[i];
			}
		}
	}
	
	printf("\n First Largest Element : %d",l1);
	printf("\n Second Largest Element : %d",l2);
	
	return 0;
}



/*

		Dry run the program 
		
		
		array  arr[100] = {30,25,45,60}
		
	for(i=0;i<n;i++)			
	{
		if(arr[i]>l1)		30 > int_min		25 > 30				 45>30	  60>45
		{					condition true		condition false		 true	   true
			l2=l1;			l2 = int_min		 going to else		l2=30	  l2=45 <---
			l1=arr[i];		l1 = 30					condition		l1=45	  l1=60 <---
		}					 i++									 i++	  array end
		else
		{
			if(arr[i]>l2 && arr[i]<l1)			25>int_min && 25<30
			{									 condition is true
				l2=arr[i];						  l2 = 25
			}										i++
	}
	
	
	now ,, 
		print l1 as largest number
	and 
	    print l2 as second largest number 
	    
*/
	    
	    