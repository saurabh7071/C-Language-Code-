
/*
	Q1 : Traverse - Print all the array elements one by one 
	Q2 : Insertion - Adds an element at the given index
	 
*/


// Answer of question No.2


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
	
	printf("\n Enter the location where you wish to insert an element : ");
	scanf("%d",&position);	// Enter position is 3 but resultant position is 2 ,, so carefull
							// because here position = position-1 is proceed 
	printf("\n Enter the value to insert : ");
	scanf("%d",&value);
	
	for(i=n-1;i>=position-1;i--)
	{
		arr[i+1]=arr[i];
	}
	
	arr[position-1]=value;
	
	printf("\n Resultant array is : ");
	
	for(i=0;i<=n;i++)
	{
		printf("\n%d",arr[i]);
	}
	
	return 0;
}	


/* 

		* Dry Run the condition 
	
	condition : 
		
	for(i=n-1;i>=position-1;i--)		
	{									 
		arr[i+1]=arr[i];				 
	}									  
																
	arr[position-1]=value;			
	
	
	dry run : 
	
	      0  1  2  3  4  5
	arr=[30 20 40 60 90 80]
	
	now
	
		  0  1   2   3  4  5  6
	arr=[30 20  50  40 60 90 80]	here add the new element in array at position 2 which is 50
	
	here n=6     position=3      value=50
	
	i=6-1=5 ie i=5 ; 5>=3-1=2 ie 5>=2		Condition is true 
	       arr[5+1] ie arr[6] = arr[5] ie 80    here value of arr[5] is assigned in arr[6]
	       
	       now i--
	       
	i=4 ; 4>=2    condition is true 
		   arr[5] = arr[4] ie 90    here value of arr[4] is assigned in arr[5]  
		   
		   now i--
		   
    i=3 ; 3>=2    condition is true 
		   arr[4] = arr[3] ie 60    here value of arr[3] is assigned in arr[4]
		   
		   now i--
		   
	i=2 ; 2>=2    condition is true 
		   arr[3] = arr[2] ie 40   here value of arr[2]	is assigned in arr[3]
		   
		   now i--
		   
	i=1 ; 1>=2    condition is false 
			exit loop 
			
		arr[position(3)-1] ie arr[2]=value(50)  
		
		and then Resultant Array 
		
		ie 30 20  50  40 60 90 80 	
		
*/			      		   