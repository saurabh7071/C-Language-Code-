/* Subtraction of pointers :
						A value can be subtracted from the pointer just by the same 
					process as in addition in pointers. An address will be the
					output as the result of subtracting any number from a pointer.
					
	Here is the formula of subtracting any value from a pointer variable:

    new_address= current_address - (number * size_of(data type))
*/

#include<stdio.h>  
int main()
{  
	int num=70;        
	int *x;					//pointer to int      
	x=&num ;				//stores the address of num variable        

	printf("Address of x variable is %u \n",x);        

	x=x-3; 				   //subtracting 3 from pointer variable    

	printf("After subtracting 3: Address of x variable is %u \n",x);        

	return 0;  
}    