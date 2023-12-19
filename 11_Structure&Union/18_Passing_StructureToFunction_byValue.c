



/* 
			Passing Structure to a function 
			
	It can be done in below 3 ways.
	
		1) passing structure to a function by value 
		2) Passing structure to a function by address(reference)
		3) No need to pass a structure - Declare structure variable as globle
		
		
	Passing structure to a function by value : 
		
			In this program , the whole structure is passed to another function by value. It
			means the whole structure is passed to another function with all members and their
			values. So, this structure can be accessed from called function. This concept is
			very useful while writing very big programs in c. 
			
*/


#include<stdio.h>
#include<conio.h>

struct student
{
	int id;
	char name[50];
	float percentage;
};

void func(struct student record);

int main()
{
	struct student record;
	
	record.id = 65;
	strcpy(record.name,"Saurabh");
	record.percentage = 86.45;
	
	func(record);
	
	return 0;
}			

void func(struct student record)
{
	printf("\nId : %d",record.id);
	printf("\nname : %s",record.name);
	printf("\npercentage : %f",record.percentage);
}