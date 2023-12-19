/*  Call by reference : Sending the address of arguments
                       Here the address of the variable is passed to the function
					   as arguments.
					   
					   This function is capable of swapping the values bassed to it.
					   if a=3 and b=4 before a call to swap (a,b) , a=4 and b=3 after 
					   calling swap.
					   
	Call by reference :yani function me kis tarah address pass kiya jata hai or kis 
					   tarah function un address ko receive karke hum actual arguments 
					   me changes karte hai..  */
				
#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b);

void main()
{
    int x,y;
    
    printf("Enter the two Numbers :");
    scanf("%d%d",&x,&y);
    
    printf("The value of x and y before swap is %d and %d\n",x,y); 
	  
    swap(&x,&y);  // Will work due to call by reference  
	
	printf("The value of x and y after swap is %d and %d\n",x,y);
}				   

 void swap(int *a, int *b)
 {
 	int temp;
 	temp=*a;
 	*a=*b;
 	*b=temp;
 }	 				    
