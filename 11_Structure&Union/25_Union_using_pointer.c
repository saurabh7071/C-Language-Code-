
/*
	
		Accessing members of union using pointers
		
	
	We can access the members of the union through pointers by using the (->) arrow 
	pointer. 
	
	In the code, we have created a pointer variable, i.e *ptr that stores the address
	of var variable. Now, ptr can access the variable 'a' by using the (->) operator.
	Hence the output of the above code would be 90.
	
*/

#include<stdio.h>
#include<conio.h>

union abc
{
	int a;
	char b;
};

int main()
{
	union abc var;	
	union abc *ptr ;		 // Pointer variable declaration
	
	var.a = 70;
	ptr = &var;
	
	printf("The value of a is : %d",ptr -> a);
	
	return 0; 
	}	