 /*
	** Basic Structure of a program :- 
	
	1)	All C Programms have to follw a basic structure.
	2)	A C Program start with a main function and executes instruction present inside it.
	3)	Each instuction is terminated with a semicolon(;)
		
		
	** Comments :- 
					Comments are used to clarify something about the program in plain 
					language. It is way for use to add notes to our program. 
					
					There are two types of comment in c :-
							1) Single line comment :- //
							2) Multi line comment :-  /* ............ */  
/* 							
					Comments in a c program are not executed and are ignored.
					
	
	** Compilation and Execution :- 
		
		first.c     --->     C Compiler    --->  First.exc
		(file in        ( Used for basic        ( Executed file)
		VS code)		  cheks in program.)
		
		
	-->	A compiler is a computer program which converts a C Program into machine 
		    Language so that it can be easily understand by the computer.
	-->	A C Program is written in plain text. This plain text is combination of 
			Instructions in a particular sequence. 
	-->	The compile performs some basic cheks and finally converts the programm into an 
		 executable.
		 
		 
		 
	** Libraby Functions :- 
							Library functions are build-in functions that are grouped together 
							placed in a common location called library. 
							
							Each functions here performs a specific operations. We can use this library
							functions to get the pre-defined output.
							
							C Language has a lot of valuable Library functions which 
							is used to carry out certain tasks. 
							
							For instance 'printf'function is used to print values 
							   on the screen.
							   
						printf("This is %d",i);
						
						%d for integers
						%f for real values
						%c for characters
						
	
	** Receiving Input from the User :- 
			In order to take input from the user and assigne in to a variable, we use
			 scanf function.
			
			Syntax for using scanf :-
										Scanf("%d",&i);
										
 										
		& is the "address of" operator and it means that the supplied value should be
		copied to the address which is indicated by variable i.
		
		'&' this symbol is called as ampersand. which is returns the address of variable......  
		
			.
			.
			.
			.
			.
			.
			.
			.
			.
			.
	*/ 		

	


	

// Headerfiles 	
#include<stdio.h>	// stdio.h --> Standerd_Input_Output.h 	
#include<conio.h>	// conio.h --> Consoul_Input_Output.h
					//  #	   --> Pre-processor directive
					/* 			   C assumes that there is a step that happens before 
									the normal compilation step that processes any 
									liness that start with a '#' symbol.
									Hence, we have things like : #include<somefile.h>
					*/   			    

//main function 
int main()			/*    about the int main() function --->
									
									An int is a keyword that references an integer 
								data type. An int data type used with the main() fun
							that indicates the function should return an integer value
							When we use an int main() function, it is compulsory to 
							write return 0; statement at the end of the main() function.
							
					*/		 
{
	// Declaration
	int x; 
	int a=5;		// int , float , char is datatypes.
	float b=9.45;	// a , b , c is variables.
	char c='p';		// 5 , 9.45 , 'p' is declared value in variables.
	
	/* About printf() and scanf() functions ---> 
	
					printf() is use to display the output 
					scanf() is use to read the inputs
					
						printf() and scanf() functions are declared in "stdio.h" 
					header file in c library.All syntax in C language including 
					printf() and scanf() functions are case sensitive.
		
		Semicolon (;) :- Semicolon are end statements in C.
						
						    The semicolon tells that the current statement has been 
						terminated and oter statements following are new statements.
						
						Usage of Semicolon in C will remove ambiguity and confusion
							while looking at the code.
							  	
	*/
					 
					
	printf("Enter any number : ");	
	scanf("%d",&x);
	
	printf("x=%d\n",x);
	
	printf("\n*************\n");
	
	/* 		formate specifires (%d , %f , %c) ----> 
	
						The formate specifires are used in C for input and output 
							purposes.
			 
			 
			 formate specifires 						Type 
			 		%d								 Signed integer
			 		%f								 Float values 
			 		%c 								 Character
					%s 								 String  
			 		%i 								 Unsigned integer 
			 		%lf								 Double 
			 		%Lf								 Long double 
			 		%l								 long 
			 		%p								 Pointer 
			 		%u 								 Unsigned int 
			 		%%								 Prints % character 
			 		.									.
			 		.									.
			 		.									.
			 		. 									.
			 		etc......							.
			 		
			
			Escape Sequence ----> 
			
								An escape sequence in C language is a sequence of 
							characters that doesn't represent itself when used inside string 
							literal or character.
							
							List of Escape Sequence :- 
					
					Escape Sequences 						Meaning 
						\n 									New line 
						\t 									Tab(Horizontal)
						\a									Alarm or Beep
						\b 									Backspace
						\f 									Form feed 
						\r 									Carriage Return 
						\v 									Vertical Tab 
						\\									Backslash 
						\0									Null
							 		
*/
			 		
	printf("\n a=%d",a);
	printf("\n b=%f",b);
	printf("\n c=%c",c);
	
	return 0;
	
	/* 
		About return 0 -----> 
		
							 It is used to return a value from the function or stop 
						the execution of the function.
						
	Use_case				return 0 						return 1
	
	In the main 		return 0 in the main 			 return 1 in the main 
	function 			function means that the			 function means that the 
						program executed successfully 	 program does not execute
														 successfully and ther is
															 some error.
															 
*/
															 
}							 						   	  

/*


#include<stdio.h>
#include<conio.h>

int main()
{
	int x; 
	int a=5;
	float b=9.45;
	char c='p';	
	
	printf("Enter any number : ");	
	scanf("%d",&x);
	
	printf("x=%d\n",x);
	
	printf("\n*************\n");
	
	printf("\n a=%d",a);
	printf("\n b=%f",b);
	printf("\n c=%c",c);
	
	return 0;
	
}


*/
				 