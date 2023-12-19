/*   o                       Pointer
   
A Pointer is a variable which stores the address of another variable...
    
The 'address of' (&) Operator :
                             The address of operator is used to obtain the address
	    					  of a given variable...
								  
    						 # Format specifire for printing pointer address is '%u'..    
                                
The 'value of address' operator (*) :
                                     The 'value of address' or '* operator' is used to
								  obtain the value present at a given memory address...
										  
		    						  It is denoted by * ....    
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int i=34;
	int *j=&i;  // j will now store the address of i ...
	
	printf("The value of i is :%d\n",i);
	printf("The value of i is :%d\n",*j);
	
	printf("The address of i is :%u\n",&i);
	printf("The address of i is :%u\n",j);
	printf("The address of j is :%u\n",&j);
	
	printf("The value of j is :%u\n",*(&j));
	
	return 0;
}									
									 