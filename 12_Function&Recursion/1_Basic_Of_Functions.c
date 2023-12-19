
/*
						Functions 
						
	What is function ? 
	
		We can divide a large program into the basic building blocks known as function.
	
		OR
	
		A function is a block of code which performs a perticular task.
		
		
		
		-->	The function contains the set of programming statements enclosed by {} .
		
		-->	A function can be called multiple times to provide reusability and 
			modularity to the C program.
			
		-->	Sometimes our program gets bigger in size and its not possible for a 
			programmer to track which piece of code is doing what...
				function is a way to break our code into chunks so that it is possible
				for a programmer to reuse them.
				
		-->	In other words we can say that the collection of functions creates a program.
		
		-->	The function is also known as procedureor subroutine in other programming 
			languages. 							
		
		
		
			
	Advantages of functions in C : 
	
		1)	By using functions, we can avoid rewriting same logic/code again and agian
			in a program.
			
		2)	We can call C functions any number of times in a program and from any place 
			in a program. 
			
		3)	We can track a large C program easily when it is devided into multiple functions.
		
		4) 	Reusability is the main achievement of C functions.
		
		5)	However, function calling is always a overhead in a C Program. 
		
		
		
		
		
		
	Function Aspects : 
	
		There are the three aspects of a C functions...
		
		1) Function declaration : A function must be declare globally in a C program to 
			OR					  to tell the compiler about the function name, function
		   Function prototype	  paramerters, and return type.
								  
		2)	Function call : 	  Function can be called from anywhere in the program. The
								  Paramerter list must not differ in function calling and 
								  function declaration. We must pass the same number of 
								  functions as it is declared in the function declaration.
								  
		3)  Function definition : It contains the actual statements which are to be executed.
								  It is the most important aspect to which the control comes
								  when the function is called. Here, we must notice that only
								  one value can be returned from the function. 
								  
								  
		Example : 	#include<stdio.h>
					
					void display();				---->  Function declaration/prototype	
					
					int main()
					{
						int a;
						display();				---->  Function call 
						return 0;
					}
					void display()				---->  Function definition 
					{
						Printf("Hey Saurabh");
					}
			
			
			
			
					
	
	Types of Functions : 
	
		1)	Library functions : 	Library functions are the functions which are
								declared in the C header file such as scanf() , printf() 
								gets() , puts() , ceil() , floor() etc.
								
		2)	User-defined functions :	These are the functions declared and define 
									by the user. So that he can use it many times.
									It reduce the complexity of a big program and 
									optimizes the code. 
			
			
			
									
									
	Return Value :
	
		A 'C' function may or may not return a value from the function. If you don't
		have to return any value from the function, use void for the return type. 
		
		Example without return value :
			
				void hello()
				{
					printf("Hello");
				}
				
			
		If you want to return any value from the function, you need to use any data
		type such as int, long, char etc. The return type depends on the value to be
		returned from the functions. 
		
		Example with return value :
		
				int get()
				{
					return 10;		
				}
				
				
		In the above example, we have to return 10 as a value, so the return type is
		int. If you want to return floating point value (eg. 10.3 , 11.3 , 2.1 etc)
		then you need to use float as the return type of the methode.
		
				float get()
				{
					return 10.2;
				}
				
		
		
		
				
	Passing Values to function : 
	
		We can pass values to a function and can get a value in return from  function.
		
		
		int sum (int a , int b)
		 |					\
		 |					 \ 
		return value	   Parameters
		
		The above prototype means that sum is a function which takes values a(of type int)
		and b(of type int) are return a value of type int. 
		
		
		Function definition of sum can be :
		
			int sum(int a,int b)		----->		a and b are parameters
			{
				int c;
				c=a+b;
				return 0;
			}
			
			Now we can call sum(2,3); from main to get 5 in result.
							------> here 2 and 3 are arguments.
							
			int d= sum(2,3);		---> d becomes 5.
			
	
	
	
	Note : 
	
		1)	parameters are the values or variable placeholder in the function definition
			Ex : a and b 
			
		2)	Arguments are the actual values passed to the function to make a call. 
			Ex : 2 and 3 
			
		3) 	A function can return only one value at a time.
		
		4) 	If the passed variable is changed inside the function, the function call 
			doesn't change the value in the calling function. 
			
			
			int change(int a)
			{
				a=77;		---> Mishomer
				return 0;	 
			}
			
			change is a function which changes a to 77. No if we call it from main
			like this. 
			
			
			int b = 22;
			change(b);			----> The value of b remains 22. 
			printf("B is %d",b);	---> Print : B is 22 .
			
			This happens because a copy of b is passed to the change function.
			
*/


#include<stdio.h>
#include<conio.h>

void change(int b);

int main()
{
	int b = 244;
	
	printf("\nThe value of b before change is %d",b);
	
	change(b);
	
	printf("\nThe value of b after change is %d",b);
	
	return 0;
}

void change(int b)
{
	b=77;
	printf("\nThe value of b after change is %d",b);
}			 