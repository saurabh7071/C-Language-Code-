/* 				Wild Pointer

	* What is a Wild Pointer?
	1) A pointer variable that not initialized with any address is called wild pointer
	
	2) Wild pointer is also known as Un-initialized pointer because it holds the 
	   address of random memory location.
	 
	3) These Pointers points to some arbitrary location in memory and may cause a
		program to crash or behave badly.
		
	4) Dereferencing wild pointers can cause nasty bugs.
	
	5) It is suggested to always initialize unused pointers to NULL.    
	    
	 
	Ex : int a;
	 	 int *ptr;   -->wild pointer.
	     ptr=&a;    -->ptr no longer wild pointer.   
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,*q,*r;
	
	printf("%d  %d  %d",p,q,r);
	
	return 0;
	
}	    
	    