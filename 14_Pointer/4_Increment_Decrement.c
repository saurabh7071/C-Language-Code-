/*					 
	Increment :-It is a condition that also comes under addition.
	    When a pointer is incremented, it actually increments by the 
		number equal to the size of the data type for which it is a pointer.
		
		For Example: 
                   If an integer pointer that stores address 1000 is incremented, then 
                   it will increment by 2(size of an int) and the new address it
				 will points to 1002. While if a float type pointer is incremented 
				 then it will increment by 4(size of a float) and the new address 
				 will be 1004. 
				 
	Decrement: It is a condition that also comes under subtraction. When a pointer 
	           is decremented, it actually decrements by the number equal to the 
			   size of the data type for which it is a pointer.
			   
		For Example: 
                    If an integer pointer that stores address 1000 is decremented,
					then it will decrement by 2(size of an int) and the new address
					it will points to 998. While if a float type pointer is
					decremented then it will decrement by 4(size of a float) and 
					the new address will be 996.	    			 
*/ 

						

#include<stdio.h>
#include<conio.h>

int main()
{
	 int a=5,*pi=&a;
	 float b=2.5,*pf=&b;
	 char c='z',*pc=&c;
	 
	 printf("Value of pi = Address of a = %u\n",pi);
	 printf("Value of pf = Address of b = %u\n",pf);
	 printf("Value of pc = Address of c = %u\n",pc);
	 
	 pi++;
	 pf++;
	 pc++;
		 
	 printf("Pointer value after Increment of pi = %u \n",pi);
	 printf("Pointer value after Increment of pf = %u \n",pf);
	 printf("Pointer value after Increment of pc = %u \n",pc);
	 
	 printf("\n*****\n");
	 
	 printf("Value of pi = Address of a = %u\n",pi);
	 printf("Value of pf = Address of b = %u\n",pf);
	 printf("Value of pc = Address of c = %u\n",pc);
	 
	 pi--;
	 pf--;
	 pc--;
	 
	 printf("Pointer value after Decrement of pi = %u \n",pi);
	 printf("Pointer value after Decrement of pf = %u \n",pf);
	 printf("Pointer value after Decrement of pc = %u \n",pc);
	 
	 return 0;
	 
}