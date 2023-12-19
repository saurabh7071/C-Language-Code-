#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=56;
	int *ptr;  // This is a wild pointer 
	
	// *ptr=24;  --> this is not a good thing to do 
	
	ptr = &a;  // ptr is no longer a wild pointer  
	
	printf("%d\n",*ptr);
	return 0;
}