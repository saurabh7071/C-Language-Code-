 /*  			Null Pointer 

	*What is Null pointer? 
	1) Null pointer is a pointer which has a value reserved for indicating that the 
		pointer or reference does not refer to a valid object.
	2) A Null pointer is guaranteed to compare unequal to any poiner that points to 
		a valid object.
	3)Dereferencing a null pointer is undefined behavior in c, and a conforming 
		implemention is allowed to assume that any pointer that is dereferenced is 
		not Null.
	4) Null pointer is a specific pointer which is mentioned in c standard and it 
		has specific purposes.
	5) Null pointer gives a functionality to c programmer to check whether a pointer
		is legitimate or not.	
	6) A pointer variable that is initialize with the Null Value of the time of 
		pointer declaretion is called Null Pointer.
 
 	*NULL POINTER : C PROGRAM
 	1) A Null pointer is pointer that points to NULL(nothing)
 	2) A Null pointer should not be dereferenced.
 	3) A chek must be run by the c programmer to know whether a pointer is null before
 		dereferencing it.
 		
 	Ex : int x=10;
	 	 int *p=NULL;  --> Null pointer
		  p=&x;    --> Null pointer now holds address of int 'x'	
 	
 
 	*More on Null Pointer :
	1) Null macro is defined as ((void *)0) in header files of most of the C compiler 
		implementations.
	2) Null pointer vs Un-initialized pointer - An un-initialized pointr contains an
		undefined value.
	3) A Null pointer stroes a defined value, which is the one decided by the environment 
		to not be a valid memory address for any object.
	4) Null pointer vs Void Pointer - Null pointer is a value where as void pointer is 
		a type.			 	
*/

#include<stdio.h>
#include<conio.h> 

int main()
{
	int Null,*p;
	*p = Null;
	
	printf("%d",*p);
	
	return 0;
}	