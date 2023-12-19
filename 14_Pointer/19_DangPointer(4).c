#include<stdio.h>
#include<stdlib.h>

int *FunctionDangling()
{
	int a,b,sum;
	a=14;
	b=39;
	sum=a+b;
	
	return &sum;
}

int main()
{
	// Case 1 : De-allocation of memory block
	
	int *ptr=(int *) malloc(7* sizeof(int));
	ptr[0]=23;
	ptr[1]=32;
	ptr[2]=89;
	ptr[3]=50;
	free(ptr);  // ptr is now a dangling pointer.
	
	// Case 2 : Function returning local variable address
	
	int *dangPtr=FunctionDangling();  // dangPtr is now a dangling pointer.
	
	// Case 3 : If a variable gose out of scope
	
	int *danglingPtr3;
	{
		int a=15;
		
		danglingPtr3=&a;
	}
	 /* Here variable a goes out of scope which means danglingPtr3 is pointing to a 
	 	location which is freed and hence danglingPtr3 is now a danglin pointer */
}