/*
						Structures in C
			
	What is a Structure ? 
		A structue is a key world that create user defined datatype in C / C++	
		
		A Structure is a collections of Variables of different types under a single name.
		
		or 
		
		The structure is the collection of different data types grouped under the same name
		using the struct keyword. It is also known as the user-defined data type that enables 
		the programmer to store different data typed records in the structure.
		
		member : The collection of data elements inside the structure is termed as the member
	
		  struct	structure 
		 keyword	Tag
		   | 		 |
		  |			|
		struct saurabh
		{
			char_name[10];		-----
			int id[5];				| ----  Members or fields of structure 
			float salary; 		----
		};
		
	
	Why use Structures ?
		We can create the datatypes in the cmployee structure separately but when the number 
		of propertees in a structure increases, it becomes difficult for us to create data
		variables without structures. 
		
		In a nut shell :
			1)  Structures reep the data organized.
			2)  Structures make data managment easy for the programmer
			
	
	How to creat a Structure ? 
		"struct" keyword is used to create a structure. 
		
		Ex : 
				struct address
				{ 
					char name[50];
					char street[50];
					char city[50];
					char state[50];
				};
				
				
	How to declare structure variables ? 
		A sturcture variable can either be declared with structure declaration or as a separate 
		declaration like basic types.	
		
		
		// A variable declaration with structure declaration. 
		struct point
		{
			int x,y;
		}p1;			// The variable p1 is declared with 'point'
		
		
		// A variable declaration like basic datatype 
		struct point 
		{
			int x,y;
		};
		
		
		int main()
		{
			struct point p1;		// The variable p1 is declared like a normal variable 
		}
		
		
	How to initialize structure members ? 
		Structure members cannot be initialized with declaration. For example the following 
		C program fail in compilation.
		
		struct point
		{
			int x=0;	// Compile error : cannot initialize members here 
			int y=0;	// Compile error : cannot initialize members here
		}
		
		The reason for above error is simple, when a datatype is declared, no memory is 
		allocate for it. Memory is allocated only when variable are created. 
		Structure members can be initialized using curly braces '{}' 
		
		for example : Following is a valid initialization
		
		struct point 
		{
			int x,y;
		};
		
		int main()
		{
			// A valid initialization : member x gets value 0 and y gets value 1.
			// The order of declaration is followed.
			
			struct point p1 = {0,1};
		}
		
	How to access structure elements ?
		Structure members are accessed using dot (.) operator
		
		#include<stdio.h>
		
		struct point
		{
			int x,y;
		};
		
		int main()
		{
			struct point p1 = {0,1};
			
			// Accessing members of point p1
			
			p1.x = 20;
			printf("x = %d , y = %d",p1.x , p1.y);
			
			return 0;
		}
		
		Output : 
				x = 20 , y = 1 
				
	
				
	what is designated initialization ?
		Designated initialization allows structure members to be initialized in any order.
		
		#include<stdio.h>
		
		struct point 
		{	
			int x,y,z;
		};
		
		int main()	
		{
			// Examples of initialization usign desinated initialization 
			
			struct point p1 = {.y = 0 , .z = 1 , .x = 2};
			struct point p2 = {.x = 20};
			
			printf(" x = %d , y = %d\n , z = %d\n", p1.x , p1.y , p1.z);
			printf(" x = %d", p2.x);
			
			return 0;
		}
		
		Output : x = 2 , y = 0 , z = 1
				 x = 20 
				 
				 
	Limitations of C Structure : 
		In C language, Structure provide a method for packing together data of different 
		type. A Structure is a helpful tool to handle a group of logically related data 
		itmes. However, C Structure have some limitations. 
		
		1)	The C Structure does not allow the struct data type to be treated like built-
			in data type. 
			
		2) 	We cannot use operators like + , - etc. on structure variable.
		
			For Example : 
							struct number
							{
								float x;
							};
							
							int main()
							{
								struct number n1,n2,n3;
								
								n1.x = 5;
								n2.x = 4;
								n3	 = n1 + n2;
								
								return 0;
							}
							
							Output : 
									error 
									invalid operands to binary + (have struct number and struct number)
									n3 = n1 + n2;
									
		3) No Data hiding :  C structures do not permit data hiding. structure members can 
							be accessed by any function, anywhere in the scope of the 
							structure.
							
		4) Function inside Structure : Structures do not permit functions inside structure
		
		5) Static members : C structures cannot have static members inside their body.
		
		6) Access Modifiers : C programming language do not support access modifiers. So
								they cannot be used in C structure.
								
		7) Constuction creation in structure : Structure in C cannot have constructor
												inside structure.
												
	
	
	Use of typedef in Structure : 
	
			typedef makes the code short and improve readibility. In the above discussion we
			have seen that while using structe every time we have to use the lengthy syntax,
			which makes the code confusing, lengthy, complex and less readable. the simple
			solution to this issue is used of typedef. it is like an alias of stuct.
			
														
		Code without typedef : 
	
						struct home_address
						{
							int local_street;
							char town;
							char my_city;
							char my_country;
						};
						
						.......
						
						struct home_address var;
						var.town = "Agra";
						
						
		Code using typedef : 
				
						typedef struct home_address
						{
							int local_street;
							char town;
							char my_city;
							char my_country;
						}addr;
						
						........
						
						addr var1 ; 
						var.town = "Agra";
						
	
			insted of using the struct home_address every time you need to declare struct 
			variable, but you can simply use addr by using the typedef.
	
		
	
*/

					