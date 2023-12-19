

/*

						Structure Pointer in C 
						
	Syntax to define Structure :
		
		struct structure_name
		{
			char name[50];
			int roll_No;
			float percentage;
			char sub[50];
			
		};
		
		struct structure_name str; 
		
			
			Here structure_name is the name of the structure that is defined using the struct 
		keyword. Inside the structure_name, it collects different data types (int , char ,float)
		elements known as the member. And the last str, is a variable of the structure.
		
		
	Structure Pointer : 
	
		The structure pointer points to the address of a memory block where the structure is
		being stored. Like a pointer that tells the address of another variable of any data
		type (int,char,float) in memory. And here, we use a structure pointer which tells 
		the address of a structure in memory by pointing pointer variable ptr to the structure
		variable. 
		
	Declare a Stucture Pointer : 
	
		The declaration of a structure pointer is similar to the declaration of the structure
		variable. So we can declare the structure pointer and variable inside and outside of
		the main() function. To declare a pointer variable in C, we use the asterisk(*) symbol
		befor the variable's name.
		
		struct structure_name *ptr;
		
	initialization of the Structure pointer :
		
		Struct structure_name *ptr = &structure_variable;
		
		As we can see a pointer ptr is pointing to the address structure_variable of the 
		structure.
		
		
	Access Structure member using pointer : 
	
		There are two ways to access the member of the structure using structure pointer.
		
			1) Using (*) asterisk or indirection operator and dot (.) operator
			2) Using arrow (-->) operator or membership operator
								
		
*/

// Using structure pointer and the dot operator

#include<stdio.h>

struct student
{
	char name[50];
	int roll_no;
	char state[50];
	int age;
};

int main()
{
	
	struct student s1;
	struct student *ptr;		// Create a pointer variable (*ptr)
	ptr = &s1;
	
	strcpy(s1.name,"saurabh");
	s1.roll_no = 65;
	strcpy(s1.state,"Maharastra");
	s1.age = 18;
	
			
	printf("\n Name of the student is : %s",(*ptr).name);
	printf("\n Roll_No of the student is : %d",(*ptr).roll_no);
	printf("\n The state of the student is : %s",(*ptr).state);
	printf("\n Age of the student is : %d",(*ptr).age);
	
	return 0;
}

												