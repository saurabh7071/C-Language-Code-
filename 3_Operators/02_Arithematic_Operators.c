
/* 	
							Arithematic Operators :-
						
    Operator			Description								    Example
    																A=10 , B=20
    																
	+				Adds two operands.							    A + B = 30
	-				subtracts second operand from the first.	    A - B = -10
	*				Multiplies both operands.				        A * B = 200
	/				Divides numerator by de-numerator.			    B / A = 2
	%				Modulus Operator and remainder of after an 
							integer division.					    B % A = 0
	++				Increment operator increases the integer
							 value by one.							A++ = 11
	--				Decrement operator decreases the integer 	
							 value by one.							A-- = 9	
							 
	
	pre-increment(++i)  ---->  Before assigning the value to the variable, the value is incremented by one. 
	post-increment(i++) ---->  After assigning the value to the variable, the value is incremented by one.
							 
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
	printf("Enter the value of a and b :");
	scanf("%d %d",&a,&b);
	
	printf(" a+b :%d\n",a+b);
	printf(" a-b :%d\n",a-b);
	printf(" a*b :%d\n",a*b);
	printf(" a/b :%d\n",a/b);
	printf(" a%b :%d\n",a%b);
	printf(" ++a :%d\n",++a);
    printf(" --a :%d\n",--a);
    printf(" ++b :%d\n",++b);
	printf(" --b :%d\n",--b);
	
	
	
	return 0;
}							 				