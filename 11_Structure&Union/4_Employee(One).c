

#include<stdio.h>
#include<conio.h>

int main()
{
	struct employee
	{
		char emp_name[100];
		int emp_id;
		float emp_salary;
	}e1;
	
	// struct employee e1;     this type of declaration also used in structure
	 
	printf("Enter the name of Employee : ");
	scanf("%s",&e1.emp_name);
	
	
	printf("Enter the Employee ID : ");
	scanf("%d",&e1.emp_id);
	
	
	printf("Enter the Employee salary : ");
	scanf("%f",&e1.emp_salary);
	
	printf("\n\n************************************\n\n");
	
	printf("	Employee Details  ");
	printf("\n\nEmployee Name : %s",e1.emp_name);
	printf("\nEmployee ID 	: %d",e1.emp_id);
	printf("\nEmployee Salary : %.3f",e1.emp_salary);
	
	return 0;
}