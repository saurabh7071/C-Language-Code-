/* 
	Addition :
			  When a pointer is added with a value, the value is first multiplied 
			  by the size of data type and then added to the pointer.

    * A specific value can be added to the pointer variable. Here is the formula 
	  for adding the value to a pointer:

      new_address= current_address + (number * size_of(data type))
      
*/


#include<stdio.h>  
int main()
{  
 int num=70;        
 int *x;                      //pointer to int      
 x = &num ;                     //stores the address of num variable        
 
 printf("Address of x variable is %u\n",x);        

 x=x+3;                      //adding 3 to pointer variable    

 printf("After adding 3: Address of x variable is %u\n",x);       

 return 0;  
}    