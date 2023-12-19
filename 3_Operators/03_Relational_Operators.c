/* 
						Relational Operators :- 
						
Operator	              Description	                              Example
																	A=10 , B=20
																	
==			Checks if the values of two operands are equal 
			or not. If yes, then the condition becomes true.	(A == B) is not true.
			
!=			Checks if the values of two operands are equal
			 or not. If the values are not equal, then the      (A != B) is true.
			 condition becomes true.	
			 
>			Checks if the value of left operand is greater
			 than the value of right operand. If yes, then      (A > B) is not true.
			 the condition becomes true.
			 	
<			Checks if the value of left operand is less than
			 the value of right operand. If yes, then the       (A < B) is true.
			 condition becomes true.
			 	
>=			Checks if the value of left operand is greater 
			than or equal to the value of right operand.        (A >= B) is not true.
			If yes, then the condition becomes true.
				
<=			Checks if the value of left operand is less than
			 or equal to the value of right operand. If yes,    (A <= B) is true.
			 then the condition becomes true.
			 
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
	printf("Enter the value of a and b :");
	scanf("%d %d",&a,&b);
	
	
	printf("a==b :%d\n",a==b);
	printf("a!=b :%d\n",a!=b);
	printf("a>b :%d\n",a>b);
	printf("a<b :%d\n",a<b);
	printf("a>=b :%d\n",a>=b);
	printf("a<=b :%d\n",a<=b);
	
	return 0;
	
}

			 						