/* 				Pointer to pointer 

	1) A pointer variable that holds a address of another pointer variable is called 
		pointer to pointer.
	2) We can implement the pointer to pointer variable upto 12_stages.
	3) If we working with more pointer to pointer variable then the execution of will
		be slow.
		
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a=5,*p,**q;
	p=&a;
	q=&p;
	
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",p);
	printf("%d\n",&p);
	printf("%d\n",*p);
	
	printf("%d\n",q);
	printf("%d\n",&q);
	printf("%d\n",*q);
	printf("%d\n",**q);
	
	return 0;
	
}		 	