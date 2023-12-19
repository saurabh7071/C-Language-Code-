
/*

					Nested Sturcture in C
					
	C Provides us the feature of nesting one structure within another structure by using which
	complex data type are created.
	
	for example : 
				 	We may need to store the address of an entity employee in a structue. The
					 attribute address may also have the subparts as street number, city, state
					 and pin code. Hence to store the address of the employee, we need to 
					 store the address of the employee into a separate structure and next the
					 structure address into the structure employee.
			
	The structure can be nested in the following ways : 
		
			1) By separate structure
			2) By Embedded structure		
			
	
	Separate Structure : 
						Here, we create two structures, but the department structure should 
					be used inside the main structure as a member. 
					
					consider the following example : 
					
					struct date
					{
						int dd;
						int mm;
						int yyyy;
					};
					
					struct employee
					{
						int id;
						int name[50];
						
						struct date doj ;
					
					}emp1;
					
			
		As you can see, doj (date of joining) is the variable of type date. Here doj is used
		as a member in employee structure. In this way, we can use date structure in many
		structures.
		
		
	Embedded Structure : 
						The embedded structure enables us to declare the structure inside
					the structure. Hence, it requires less line of codes but it can not be
					used in multiple data structures.
					
					Consider the following example :
					
					struct employee
					{
						int id;
						char name[50];
						
						struct date
						{
							int dd;
							int mm;
							int yyyy;
							
						}doj ;
						
					}emp1;
					
					
	Accessing Nested Structure : 
	
								We can access the member of the nested structure by 
						[  outer_structure.Nested_structure.member ]
						as given below :
						
						emp1.doj.dd
						emp1.doj.mm
						emp1.doj.yyyy				
*/


// Example of Nested structure [Separate structure]

#include<stdio.h>
#include<conio.h>

struct address 
{
	char city[50];
	int pincode;
	char phone[14];
};

struct employee
{
	char name[50];
	char state[10];
	
	struct address add;
		
};

int main()
{
	struct employee emp;
	
	printf("Enter an employee information\n\n");
	
	printf("Enter the name of employee : ");
	scanf("%s",&emp.name);
	
	printf("Enter the city of employee : ");
	scanf("%s",&emp.add.city);
	
	printf("Enter the pincode of employee : ");
	scanf("%d",&emp.add.pincode);
	
	printf("Enter the phone_No of employee : ");
	scanf("%s",&emp.add.phone);
	
	printf("Enter the state of employee : ");
	scanf("%s",&emp.state);
	
	
	printf("\n\n --> Printing the employee information <-- \n\n");
	
	
	printf("Name : %s \n City : %s \n pincode : %d \n State : %s \n phone : %s",emp.name,emp.add.city,emp.add.pincode,emp.state,emp.add.phone);
	
	return 0;	
}	

				 			 	