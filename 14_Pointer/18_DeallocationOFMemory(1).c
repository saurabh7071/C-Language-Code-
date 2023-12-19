
// DEALLOCATION OF MEMORY 

// When memory is deallocated, the pointer keeps pointing to the freed space.


#include<stdio.h>
#include<conio.h>

int main()
{
	char *str = "Hii Saurabh";
	int a;
	int *ptr = (int *) malloc(sizeof(int));;
	
	free(ptr);  /* ptr now becomes a danling pointer,,memory locaton ko hi free kar diya 
														 jaha pe ptr point karta tha 
														 jis vajah se vaha pe Dangling 
														 pointer ban gaya. */    
	
	/* ptr = NULL ;   --> ptr no longer dangling,, ab ye dangling nahi raha ab ye NULL 
												  ko point kar raha hai . */ 
}