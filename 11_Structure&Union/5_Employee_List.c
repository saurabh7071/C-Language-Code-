

#include<stdio.h>
#include<conio.h>

int main()
{
	struct employee
	{
		char emp_name[100];
		int emp_id;
		float emp_salary;
		
	}e1,e2;
	
	printf("Enter the name of first employee : ");
	scanf("%s",&e1.emp_name);
	
	printf("Enter the First employee ID : ");
	scanf("%d",&e1.emp_id);

	printf("Enter the salary of First employee : ");
	scanf("%f",&e1.emp_salary);
	
	
	printf("\n..................................\n");
	
	
	printf("Enter the name of Second employee : ");
	scanf("%s",&e2.emp_name);
	
	printf("Enter the Second employee ID : ");
	scanf("%d",&e2.emp_id);

	printf("Salary of second employee : ");
	scanf("%f",&e2.emp_salary);
	
	printf("\n***********************************\n\n");
	
	
	printf("\nName of First Employee : %s",e1.emp_name);
	printf("\nId of First Employee : %d",e1.emp_id);
	printf("\nSalary of First Employee : %.3f",e1.emp_salary);
	
	
	printf("\n\n..................................\n");
	
	
	printf("\nName of First Employee : %s",e2.emp_name);
	printf("\nId of First Employee : %d",e2.emp_id);
	printf("\nSalary of First Employee : %f",e2.emp_salary);
	
}