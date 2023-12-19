
/*

					To declare structure variable as global in C 
					
		Structure variable also can be declared as global variables as we declare other variables
		in C. So, when a structure variable is declared as globle, then it is visibl to all the
		fucntions in a program. In this secenario, we don't need to pass the structure to any
		function separately.
		
*/


#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	char name[50];
	float percentage;
};

struct student record;	// Global declaration

void structure_demo();

int main()
{
	record.id = 65;
	strcpy(record.name , "Saurabh");
	record.percentage = 86.45;
	
	structure_demo();
	
	return 0;
};

void structure_demo()
{
	printf("\nId : %d",record.id);
	printf("\nName : %s",record.name);
	printf("\nPercentage : %f",record.percentage);
};					