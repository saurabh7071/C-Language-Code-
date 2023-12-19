
// Q10 : Repeated element and count 


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[1000];
	int n,i,j,c;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	printf("Enter the elements of an array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		c=1;
		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==0)
			{
				continue;
			}
			if(arr[i]==arr[j])
			{
				c++;		
				arr[j]=0;
			}
		} 
		
		if(c>1)
		{
			printf("\n %d repeated %d times",arr[i],c);
		}	
	}
	
	return 0;
}


/* 

		Dry run the program 
					0  1  2  3  4  5  
		arr[1000]={30,20,30,30,20,85}
	
	
		
	for(i=0;i<n-1;i++)			i=0												i=1
	{
		c=1;					c=30		 								  	c=20
		
		for(j=i+1;j<n;j++) 	   j=0+1 ie j=1;	j=2		j=3		j=4		j=5		j=2
		{					
			if(arr[i]==0)	    30==0;			30==0	30==0	30==0	 -		20==0
			{
				continue;		 false           false	 false	 false	 -		false
			}		
			if(arr[i]==arr[j])	30==20			 30==30	  30==30  30=20	  -		20==30
			{	
				c++;			 no 		   c++ ie 2	 c++ ie 3	no	  - 	  no
				arr[j]=0;		   		     	 30=0		30=0	 
			}					 j++		      j++		j++		j++	  end  	  j++
		} 																	   similarly others		
		
		if(c>1)												  now for 30  3>1	 for 20	 2>1
		{
			printf("\n %d repeated %d times",arr[i],c);					  print			print
		}		
*/		