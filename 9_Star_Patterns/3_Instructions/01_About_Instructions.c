/* 
	A 'C' Programm is a set of Instractions Just like a recepie which contain instructions 
	to prepare a particular Dish.
	
	Types of instructions :- 
		1) Type declarations Instructions :-
		2) Arithematic Instructins :-
		3) Control Instructions :-
		
		
	1) Type Declaration Instructions :-
			
				int a;
				float b;
				
				other variables :
								  int i=10; int j=i; int a=2; int j=a+j-i;
								  float b=a+3; float a=1.1  --> it is wrong,,,
								  float a=1.1; float b=a+3	--> it is true...
								  		because instructions are one by one executed.
								  		
								  int a,b,c,d;
								  a=b=c=d=30; --> Values of a,b,c,d will be 30 each.
		
	2) Arithmetic Instructions :- 
				
				int i=(3*2)+1; 
								Where ,,, 3,2,1 are the operands and 
								          *,+ are the operators
								          
				int b=2; c=3;
				int z; z=b+c;   ---> it is write or legal.
				int z;  b+c;    ---> it is wrong or illegal.
				
				
	**** About Modular (%):-
							 % -> Modular divisior operator
							 % -> Returns the remainder
							 % -> Cannot be apply of float 
							 % -> Sign is same as numerator
							      Ex :-  5%2=1
								  		-5%2=-1
										  
										  
	Note :- 1) No operator is assumed to be present
			     int i=ab;    ---> Invalid
			     int i=a*b;	 ---> Valid	
			     
//	printf("The value of a*b is : %d\n",a*b);	
//	printf("The value of ab is : %d\n",ab); ---> it is wrong,,operator is required 
			
			2) There is no operator to perform exponential in c, However we can use
					pow(x,y) from <math.h>
					
			3)   int z;
			     z=b*a;  ---> Legal
			     b*a=z;	---> Illegal
			     
			     
	**** Type Conversion :- 
							int and int     --> int 
							int and float   --> float
							float and float --> float
							
							Ex :    5/2=2   ;    5.0/2=2.5    
							      	2/5=0   ;    2.0/5=0.4 
									  
		Note :- int a=3.5;   ---> In this case 3.5 (float) will be demonstrated to 
									3(int) because 'a' is not able to store float.
									
									So it is wrong.......
									
				float a=8;   ---> a will store 8.0 	
				
				
	3) Control Instructions :- 
							  Determines the flow of control in a programm..
							  
						-->	  four types of control instructions in C are :
							  1) Sequence control Instruction
							  2) Decision control Instruction 
							  3) Loop control Instruction 
							  4) Case control Instruction 
							  
							  							  							  	     
*/


									   
						  							          
															  
								  		