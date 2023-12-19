/* 						**	Dangling Pointer **

	---> yek yesa pointer jo yek yesi location ko point kar raha hai, jo ab nahi rahi 
	 		yek valid memory location me ,,usko kahte hai dangling pointer. 
	 
	A pointer pointing to a freed memory location or the location whose content has been 
		deleted is called a dangling pointer.
		
		Dangling pointer arise during object destruction when an object that has an 
	incoming reference is deleted or deallocated, whitout modifying the value of 
	 the pointer.so that the pointer still points to the memory location of the 
	 deallocated memory.
		
	If a pointer variable holds the address of in-active area location is called 
			dangling pointer.
				
	* Causes of Dangling Pointer 
	  1) Deallocation of memory.
	  2) Returning local variabls in function calls.
	  3) Variable going out of scope.
	  
	  
	  in desi --> Dangling pointer means Latka huaa pointer :)
	  
	  
	* Is Dangling Pointer A Good Thing To Have?
	1) Dangling pointers can introduce nasty bugs in our c programs.
	2) Dangling pointer bugs frequently becomes security holes at times.
	3) We can avoid issues caused by dangling pointers by initializing pointer to NULL.
	4) After de-allocating memory, pointer will be no longer dangling.
	5) Assigning NULL value means pointer is a null pointer now.  
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int *p;
	 {
	 	int a=0;
	 	p=&a;
	 	
	 	p=NULL;
	 }
	    
	    printf("%d\n",*p);
	    
	    return 0;
}	