
/*

				 Passing Structure to function by address 

	In this program, the whole structure is passed to another function by address. It means only
	the address of the structure is passed to another function. The whole structure is not 
	passed to another function with all members and their values. So this structure can be 
	accessed from called function by its address.
	
*/

#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	char name[50];
	float percentage;
};

void func(struct student *record);

int main()
{
	struct student record;
	
	record.id = 65;
	strcpy(record.name , "Saurabh");
	record.percentage = 86.45;
	
	func(&record);
	
	return 0;
}	

void func(struct student *record)
{
	printf("\nId : %d",record -> id);
	printf("\nName : %s",record -> name);
	printf("\nPercentage : %f",record -> percentage);
}