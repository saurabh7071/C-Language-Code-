/* 
						Assignment Operators :-
						
	Assignment Operator are used to assign the values of variables.  
	
	
Operators 			Meaning 			Description 	
	
	=			Simple assignment      Assigns value from right side operand to left
					Operator  				side operand.
	
	+= 			Add and assignment 	   Adds right operand to the left operand and assign
					Operator		        the result to left operand.
					
	-=			Substract and          Substract right operand from the left operand and
	  			assignment operator			assign the result to left operand.
				  
	*=			Multiply and           Multiply Left operand with the right operand 
				assignment operator         and assign the result to left operand.
				
	/=			Divide and assignment  Divides left operand with the right operand and
					Operatore			    assign the result to left operand.
					
	%=			Modulus and assinment  Calculate modulus using two operands and assign
					Operatore        		the result to left operand.
					
	>>=         Right shift and	
				assignment operator
				
	<<= 		Left shift and	
				assignment operator	
				
	&= 			Bitwise AND and 
				assignment operator	
				
	^=			Bitwise XOR and
				assignment operator
	
	|=          Bitwise OR and 
				assignment Operator			
*/
 						
								// a+=20 is faster than a=a+20  
                                // += --> First addition than assignment 
#include<stdio.h>
#include<conio.h>

int main()                          
{
	int a;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("= Operator :%d\n",a=a);	
	printf("+= Operator :%d\n",a+=20);    // a+=20 means a=a+20 
	printf("-= Operator :%d\n",a-=20);    // a-=20 means a=a-20
	printf("*= Operator :%d\n",a*=2);
	printf("/= Operator :%d\n",a/=5);
	printf("Modulus and assignment Operator :%d\n",a%=3);
	printf("&= Operator :%d\n",a&=a);
	
	
	int x=5;
	printf("x=x*3+4 =%d\n",x=x*3+4);   // x=5*3+4= x=15+4=19  ,, x=19 
	printf("x*=3+4  =%d\n",x*=3+4);    // 19*7=133
	
	int b=5;
	printf("b*=3+4  =%d\n",b*=3+4);    // 5*7=35
	
	return 0;						
}														