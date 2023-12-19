
/* 
		*** Operator Presedence :- 
			
			3 * x - 8y		or		3x - 8y		or		3(x-8y) ????
				
				In c Language simple mathematicals rules like BODMAS no longer applied.
				
				The answer to the above question is provided by operator precedence and 
					associative.
					
	following table lists the operator priority in c :-
	
		priority 							Operators 
		1st 								 *  /  %
		2nd                                  +  - 
		3rd 								 =
		
				Operators of higher priority are evaluated first in the absense of 
					parenthesis.
					
					
	*** Operator Associativety :- 
		                          In programming languages the associativity of an 
				operator is a property that determines how operators of the same 
				precedence are grouped in the absence of parenthesies.
				
	Category 						Operators  						Associativity
	
	Postfix 					() [] -> , ++ -- 					Left to Right
	Unary 						+ - !  ++ -- (type) * & size of     Right to Left
	Multiplication 				* / % 								Left to Right 
	Additive                    + - 								Left to Right 
	Shift 						<< >> 								Left to Right 
	Relational 					<< = >> = 							Left to Right 
	Equality 					== != 								Left to Right 
	Bitwise AND 				& 									Left to Right 
	Bitwise XOR 				^ 									Left to Right 
	Bitwise OR 					|									Left to Right 
	Logical AND 				&&									Left to Right 
	Logical OR 					|| 									Left to Right 
	conditional 				? : 								Right to Left 
	Assignment 					= += -= *= /= %= >>= <<= &= ^= |=   Right to Left 
	comma						,									Left to Right 
	
	
	Ex : 	x * y / z   -----> (x * y) / z
			x / y * z   -----> (x / y) * z 
				
					* / follows left to Right Associativity.....
					
					
					
	** Types of Operators :-
	
	Unary 						Binary 						Ternary 
	
	Incement/Decrement 			Arithematic					Conditional(?:) 
	size of()                   Relational 	
								Logical
								Bitwise
								Assignment 
					
*/ 


#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y;
	
	printf("Enter the value of x and y :");
	scanf("%d %d",&x,&y);
	
	printf("The value of 3*x - 8*y is :%d\n",3*x - 8*y);
	printf("The value of 8*y - 3*x is :%d\n",8*y - 3*x);
	
	printf("8*3/3*2 :%d",8*3/3*2);  // --> 24/3*2 = 8*2 = 16 is ans.....
	
	return 0;
}																