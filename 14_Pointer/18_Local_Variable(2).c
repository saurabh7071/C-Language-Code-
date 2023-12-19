//  Returning Local Variables in Function Calls 

#include<stdio.h>
#include<conio.h>

int *myFunc()
{
	int a=34;  // a is local variable and goes out of scope on function return over.
	
	return &a; /* Jaise hi mai return karunga a ka address tab muze address to mil 
	              jayega lekin kyuki ye function return ho chuka hai isliye iske 
	              sare local variables destroy ho jayege or ptr dangling pointer ban
	              jayega..... */ 
}

int main()
{
	int *ptr = myFunc();   // ptr points to invalid location ,, Dangling pointer
	
	printf("%d",*ptr);
	
	return 0;
}