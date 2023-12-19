/*  
						Bitwise Operators :- 
						
	Bitwise Operators are used to perform individual bits of a number. 
	It can be used only integer type values not float , double etc.
	
	
  Operators 			     Meaning  

  & 						Bitwise AND 
  | 						Bitwise OR 
  ^ 						Bitwise XOR --> Exclusive OR 
  ~ 						Bitwise NOT --> Complement 
  >> 						Shift Right 
  << 						Shift Left
	

	a		b		a&b		a|b		a^b
	0		0		0		0		0
	0		1		0		1		1
	1		0		0		1		1
	1		1		1		1		0  
	
	
	>>  There are six different types of Bitwise Operators in C. 
		
		The Bitwise AND (&) : The C compiler recognizes the Bitwise AND with '&' operator. It takes two operands
								and performs the AND operation for every bit of the two operand numbers. It is a
								binary operator. The ouput of this operator will result in 1 only if both bits are 1....
								
								
		The Bitwie OR (|)  : The C compiler recognizes the Bitwise OR with '|' operator. It takes two operands and perform
								the OR operation for every bit of the two operand numbers. It is also a binary operator. 
								The output of this operator will result in 1 if any one of the two bits is 1....
								
								
		The Bitwise XOR (^) : The C compiler recognizes the Bitwise XOR with ^ operator. It takes two operands and perform
								the XOR operation for every bit of the two operand numbers. It is also a binary operator.
								The output of this operator will result in 1 if both the bits have different values....
								
								
		Bitwise NOT operator (~) : The C compiler recognizes the Bitwise NOT with '~' operator. It takes only one operand
									and performs the inversion of all digits of it. It is a unary operator. The output of 
									this operator will invert all the existing bits of that operand....
									
									
		Bitwise Left shift Operator (<<) : The C compiler recognizes the left shift operation with this '<<' 
											It takes only two operands and shifts all the bits of the first operand to the
											left. The second operand decides how many numbers of places this operator will
											shift its bits. It is a binary operator....
											
											
		Bitwise Right shift Operator (>>) : The C compiler recognizes the Right shift operation with this '>>'
											 It takes only two operands and shifts all the bits of the first operand to the
											 right. The second operand decides how many numbers of places this operator will
											 shift its bits. It is a binary operator........ 																 												 
	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
              
	
									       //                 128     8
									       //				   |64    |4
										   //                  ||32   ||2
						                   //                  |||16  |||1
	printf("%d\n",23&56);  //  --> output :-  23 = 0000  0000  0001   0111 
	                       //  --> 			  56 = 0000  0000  0011   1000 
	                       //  -->    		----------------------------
	                       //  -->            16 = 0000  0000  0001  0000  
	                       // 						output is 16
	                       
	                       
	printf("%d\n",23|56);  //  --> Output :-  63 = 0000  0000  0011  1111
	
	
	
	printf("%d\n",23^56);  //  --> Output :-  47 = 0000  0000  0010  1111
	
	
	
	printf("%d\n",56>>2);  //                56 =   0000 0000 0011 10(00)                      
	                       //  --> Output :- 14 = (00)00 0000 0000 1110              
	                       //                      left ----> right
	/*  --> Right shift me starting me matabal left ki taraf se 2 zero add hote hai or
	          jo end me 2 digit hote hai vo nikal jate hai or left se shift hote jate
			   hai .... 
	*/
	
	
	
	printf("%d\n",56<<3);   //  				56 = (000)0 0000 0011 1000
	                        //	--> Output :-  448 =   0000	0001 1100 0(000) 
	  		                //                         Left <----  Right 
	  		                
   /*  --> Left shift me Right ki taraf se 3 zero add hote hai or jo left me 3 digit
	          hote hai vo nikal jate hai or Right se shift hote jate  hai .... 
			  
	*/  		                
}	 					   
