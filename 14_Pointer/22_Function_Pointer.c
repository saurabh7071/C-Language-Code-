/* 
					Function Pointer
					
	1) A pointer variable that holds the address of function is known as function pointer.
	2) We can have pointing to function as well 
	3) Functions pointers are useful to implement callback functions.
	4) Compiler takes one or more source files and converts them to machine code.
*/
	

#include<stdio.h>
#include<conio.h>

int add()
{
	int a,b;
	int p;
	
	printf("Enter the two Numbers :");
	scanf("%d %d",&a,&b);
	
	return a+b;
}

int main()
{
	int (*p)(),c;
	
	p=add;
	c=p();
	printf("Sum of two number is :%d",c);	
}	
					