

/*
		How to avoid the structure padding in c ? 
		
		
	The structure padding is an in-built process that is automatically done by the compiler. 
	Sometimes it required to avoid the structure padding in c as it makes the size of the 
	structure padding in c as it makes the size of the structure greater than the size of the 
	structure members.
	
	We can avoid the structure padding in C in two ways. : 
	
		1) Using #pragma pack(1) directive
		2) Using attribute
		
*/


// Using #pragma pack(1) directive 


#include<stdio.h>
#pragma pack(1)

struct base
{
	int a;
	char b;
	double c;
};

int main()
{
	struct base var;		// Variable declaration of type base 
	
	printf("The size of the var is : %d",sizeof(var));
	
	return 0;
}		
		