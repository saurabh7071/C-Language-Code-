
/*
				Declaration a string using pointer 
		
		We can declare strings using pointer 
	
			char *ptr = "Saurabh";
		
		This tells the compiler to store the string in memory and assigned address is stored in 
		a char pointer.
	
	Note : 
		
			1)	Once a string is defined using char str[] = "Saurabh" , it cannot be
				initialized to something else.
			2)	A string defined using pointer can be reinitialized .
					Ex : pointer = "Rakesh sharma"	  
	 
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char *ptr = "Saurabh Vaidya";	// print the string with the help of pointer.
	
	printf("\nstring is : %s",ptr);
	
	
	
	printf("\n\n*********************************\n");
	
	
	
	char *pointer = "Saurabh vaidya";
	
	printf("\nString is : %s",pointer);
	
	pointer = "Rakesh Sharma";		// Re-initialization of string with the help of pointer  
	
	printf("\n\nNow,Re-Initialized string is : %s",pointer);
	
	
	
	printf("\n\n*********************************\n");
	
	
	
	char s[10] = "Saurabh";
	
	char *r = s;			// pointer r is pointing to string s.
	
	printf("\npointed string is : %s",r);	
	
	
	
	printf("\n\n*********************************\n");
	
	
	
	char *p = "Saurabh vaidya";
	
	printf("\nString p is : %s\n",p);
	
	char *q;
	
	printf("\nCopying the content of p into q\n");
	
	q=p;
	
	printf("\nString q is : %s",q);	
	
	
	return 0;
}
	
			