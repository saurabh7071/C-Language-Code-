/*  Pointer to Pointer :- Extended Concept of Pointer 

def : A pointer variable which holds a address of another pointer variable is called
      pointer to pointer.                           
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int x=5,*p,**q,***r;
	p=&x;
	q=&p;
	r=&q;
	
	printf("%u\n",p);      // Store the address of x in p and print the address...
	printf("%u\n",&p);     //  print the address, address of x which store in p....
	printf("%u\n",*(&p));  // print the address of x which store in p... 
	printf("%u\n",*p);     //  print the value of address of x which store in p...
	
	printf("%u\n",q);      // store the address of &p in q and print the address...
	printf("%u\n",&q);     // print the address, address of q...
	printf("%u\n",*(&q));  // print the address of q...
	printf("%u\n",**q);    // print the value of address of x which store in q...
	
	printf("%u\n",r);
	printf("%u\n",&r);
	printf("%u\n",*(&r));
	printf("%u\n",***r);
	
	return 0;
}