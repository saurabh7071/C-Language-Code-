/* 							 Void pointer 

	* What is a void pointer?
		1) A void pointer is a pointer that has no data type associated with it.
		2) A void pointer can be easily typecasted to any pointer type.
		3) In simple language it is a general purpose pointer variable.
		4) It can hold any type of address.
		5) It is also known as Generic Pointer.
	    6) A pointer which is declared by the help of 'void' keyword is called 
				void pointer.
	
	Ex : int x =10;
		  char y ='x';
		  
		  void *p = &x;  --> Void pointer stores address of int 'x'
		  p = &y;        --> Void pointer now holds address of char 'y'
	
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	void *p;
	p=&a;
	
	printf("\n%d",*(int *)p);
	
	
	char b='A';
	p=&b;
	
	printf("\n%c",*(char *)p);
	
	
	float f=3.4;
	p=&f;
	
	printf("\n%.2f",*(float *)p);	
	}	
	