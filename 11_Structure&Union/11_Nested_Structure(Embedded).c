

#include<stdio.h>
#include<conio.h>

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
	
}e1;

int main()
{
	// Storing employee information
	 
	e1.id = 65;
//	e1.name[50]="saurabh";
    strcpy(e1.name , "Saurabh");  //---> coping string into e1.name 
	
	e1.doj.dd = 11;
	e1.doj.mm = 9;
	e1.doj.yyyy = 2003;
	
	// printing first employee information 
	
	printf("\nEmployee id : %d",e1.id);
	printf("\nEmployee name : %s",e1.name);
	printf("\nEmployee date of joining (dd / mm / yyyy) : %d / %d / %d",e1.doj.dd, e1.doj.mm, e1.doj.yyyy);
	
	return 0;
}