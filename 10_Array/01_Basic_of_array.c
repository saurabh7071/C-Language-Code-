
/* 
							ARRAYS :- 
							
		An array is a collection of similar elements.
		
		or 
		
		Array is a collection of homogeneous data itmes referred by a single name.
		
		i.e
			One variable :- capable for storing multiple values of same type.
			
			int marks[99]; 			--> It is an integer array.
			char name[s];  			--> It is the character array.
			float percentil[86.23]  --> It is the float array.
			
	
	Note(1) :- The value can be assigned to marks array like this :-
		    	marks[0] = 88;
			 	marks[1] = 23;		
		
	Note(2) :- It is very important to note that the array index start with 0.
	
			marks -> 90 91 92 93 94 95................... 96 97 98 99
			         0   1  2  3  4  5................... 86 87 88 89
					 
					 There are total 90 elements..
		
		
	**** >  C provides two type of arrays : 
				1) Fixed-length array 
				2) Variable-length array
		
	
	***** > Array Initialization :- 
				a) Basic Initialization 		:   int arr[5]	=	{1,2,3,4,5};
				b) Initialization without size  :	int arr[]	=	{1,2,3,4,5};	
				c) Partial Initialization 		:	int arr[5]	=	{1,2};
																	[ 1  2  0  0  0] 
				d) Initialization to all zeros  :   int arr[1000]
																	[0  0 ....0  0]
																	
																	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	// By Normal method
	
	int marks[5];
	
	printf("Enter the marks of Student0 :-");
	scanf("%d",&marks[0]);
	
	printf("Enter the marks of Student1 :-");
	scanf("%d",&marks[1]);
	
	printf("Enter the marks of Student2 :-");
	scanf("%d",&marks[2]);
	
	printf("Enter the marks of Student3 :-");
	scanf("%d",&marks[3]);
	
	printf("Enter the marks of Student4 :-");
	scanf("%d",&marks[4]);
	
	printf("\n You have entered %d %d %d %d %d marks of students",marks[0],marks[1],marks[2],marks[3],marks[4]);
	
	
	
	
	printf("\n\n\n***************\n");
	
	
	
	// By using Array
	
	marks[5];
	int i;
	
	// for take input 
	
	for(i=0;i<5;i++)
	{
		printf("Enter the marks of student[%d] : ",i);
		scanf("%d",&marks[i]);
	}
	
	// for output 
	
	for(i=0;i<5;i++)
	{
		printf("\n Marks of student[%d] is : %d",i,marks[i]);
	}
	
	return 0;										
}					  						