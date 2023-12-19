
#include<stdio.h>
#include<conio.h>

int main()
{
	struct employee
	{
		char emp_name[50];
		int emp_id;
		float emp_salary;
	};
	
	struct employee e1 = {"Saurabh",65,40000};
	
	printf("\nName of Employe : %s",e1.emp_name);
	printf("\nEmployee ID : %d",e1.emp_id);
	printf("\nSalary of Employe : %f",e1.emp_salary);
	
	return 0;
}