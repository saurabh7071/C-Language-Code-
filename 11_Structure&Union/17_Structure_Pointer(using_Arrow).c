
// using structure pointer and arrow (-->) operator

#include<stdio.h>
#include<conio.h>

struct employee
{
	char name[50];
	int id;
	int age;
	char gender[10];
	char city[50];
};

int main()
{
	struct employee emp1,emp2;
	struct employee *ptr1,*ptr2;
	
	ptr1 = &emp1;
	ptr2 = &emp2;
	
	 printf("Record of First employee\n\n");
	 
	printf("Enter the name of the employee (emp1) : ");
	scanf("%s",&ptr1 -> name); 
	
	printf("Enter the id of the employee (emp1) : ");
	scanf("%d",&ptr1 -> id); 
	
	printf("Enter the age of the employee (emp1) : ");
	scanf("%d",&ptr1 -> age); 
	
	printf("Enter the gender of the employee (emp1) : ");
	scanf("%s",&ptr1 -> gender); 
	
	printf("Enter the city of the employee (emp1) : ");
	scanf("%s",&ptr1 -> city); 
	 
	 
	printf("\n\nRecord of Second employee\n\n");
	
	
	printf("Enter the name of the employee (emp2) : ");
	scanf("%s",&ptr2 -> name); 
	
	printf("Enter the id of the employee (emp2) : ");
	scanf("%d",&ptr2 -> id); 
	
	printf("Enter the age of the employee (emp2) : ");
	scanf("%d",&ptr2 -> age); 
	
	printf("Enter the gender of the employee (emp2) : ");
	scanf("%s",&ptr2 -> gender); 
	
	printf("Enter the city of the employee (emp2) : ");
	scanf("%s",&ptr2 -> city); 
	
	printf("\n*********************************");
	
	printf("\nDisplay the Details of the employee (emp1)\n");
	
	printf("\nName : %s",ptr1 -> name);
	printf("\nid : %d",ptr1 -> id);
	printf("\nAge : %d",ptr1 -> age);
	printf("\nGender : %s",ptr1 -> gender);
	printf("\ncity : %s",ptr1 -> city);
	
	printf("\n\nDisplay the Details of the employee (emp2)\n");
	
	printf("\nName : %s",ptr2 -> name);
	printf("\nid : %d",ptr2 -> id);
	printf("\nAge : %d",ptr2 -> age);
	printf("\nGender : %s",ptr2 -> gender);
	printf("\ncity : %s",ptr2 -> city);
	 
	 
	 
}