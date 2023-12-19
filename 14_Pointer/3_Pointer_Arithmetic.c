/* 					Pointer Arithmetic 
       
	   * We cannot add, multiply or divide two adresses (Subtraction is possible)
	   
       * We cannot multiply an integer to an address and similarly we cannot 
             divide an address with an integer value.
             
       * We can add or subsract integer to/from an address 
       
	   * pointer + n = pointer + sizeof (type of pointer) * n
	   
	   * We can substract two addresses of same type.
	   
	   * pointer1 - pointer2 = Literal
	      subtraction/sizeof(type of pointer) 
		  
		  
	1)	Increment/Decrement of a Pointer
	2)	Addition of integer to a pointer
	3)	Subtraction of integer to a pointer
	4)	Subtracting two pointers of the same type 
	
	
	Size of datatypes on 16-bit Machine:

		
			16 bit Machine (Turbo C)
			
	In a 16 bit machine, size of all types of pointer, be it int*, float*, char* 
	or double* is always 2 bytes. But when we perform any arithmetic function like 
	increment on a pointer, changes occur as per the size of their primitive data
	 type.
			
	Type								Size (in bytes)
	
	int or signed int						2
	char									1
	long									4
	float									4
	double									8
	long double								10
	
	
	
				32 bit Machine (Visual Basic C++)

The concept of pointer arithmetic remains exact same, but the size of pointer and 
various datatypes is different in a 32 bit machine. Pointer in 32 bit machine is 
of 4 bytes.

And, following is a table for Size of datatypes on 32-bit Machine :

	Type								Size (in bytes)
	
	int or signed int							4
	char										2
	long										8
	float										8
	double										16
    
*/


#include <stdio.h>

int main()
{
    int m = 5, n = 10, o = 0;

    int *p1;
    int *p2;
    int *p3;

    p1 = &m;    //printing the address of m
    p2 = &n;    //printing the address of n

    printf("p1 = %d\n", p1);
    printf("p2 = %d\n", p2);

    o = *p1 + *p2;
    printf("*p1 + *p2 = %d\n", o);//point 1

    p3 = p1 - p2;
    printf("p1 - p2 = %d\n", p3); //point 2

    p1++;
    printf("p1++ = %d\n", p1); //point 3

    p2--;
    printf("p2-- = %d\n", p2); //point 4

    //		Below line will give ERROR
    //	 printf("p1 + p2 = %d\n", p1+p2); //point 5

    return 0;
}



/* 

Explanation of the above program:

Point 1: Here, * means 'value at the given address'. Thus, it adds the value of m
		 and n which is 15.
Point 2: It subtracts the addresses of the two variables and then divides it by
		 the size of the pointer datatype (here integer, which has size of 4 bytes)
		  which gives us the number of elements of integer data type that can be 
		  stored within it.
Point 3: It increments the address stored by the pointer by the size of its 
			datatype(here 4).
Point 4: It decrements the address stored by the pointer by the size of its
		 datatype(here 4).
Point 5: Addition of two pointers is not allowed.

*/