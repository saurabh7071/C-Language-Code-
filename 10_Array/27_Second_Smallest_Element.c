

// Q9 : Second smallest element in an array 


#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main()
{
	int arr[1000];
	int n,i,int_max;
	
	int l1=int_max;
	int l2=int_max;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	printf("Enter the elements of an array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]<l1)
		{
			l2=l1;
			l1=arr[i];
		}
		else
		{
			if(arr[i]<l2 && arr[i]>l1)
			{
				l2=arr[i];
			}
		}
	}
	
	printf("\n First Smallest element : %d",l1);
	printf("\n Second Smallest element : %d",l2);
	
	return 0;
}

/*

Dry run the program 
		
		
		array  arr[100] = {30,25,45,60}
		
	for(i=0;i<n;i++)			
	{
		if(arr[i]<l1)		30 < int_max		25 < 30				 45<30	  60<30
		{					condition true		condition true		 false	   false
			l2=l1;			l2 = int_max		 l2 = 30 <--	        chek else	      
			l1=arr[i];		l1 = 30				 l1 = 25 <--	    		     
		}					 i++									 	      
		else
		{
			if(arr[i]<l2 && arr[i]>l1)							45<30 && 45>30	60<30 && 60>30
			{											 		condition false 	 false
				l2=arr[i];						  							
			}														i++	  			end loop
	}
	
	
	now ,, 
		print l1 as first smallest number
	and 
	    print l2 as second smallest  number 
	    
*/
	    