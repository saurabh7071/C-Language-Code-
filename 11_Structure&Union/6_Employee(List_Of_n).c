

#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	int n;
	
	struct employee 
	{
		char emp_name[100];
		int emp_id;
		float emp_salary;
		
	}e1[100];
	
	// also declare this type --> struct employee e1[100];
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the name of [%d] employee : ",i);
		scanf("%s",&e1[i].emp_name);
	
		printf("Enter the id of [%d] employee : ",i);
		scanf("%d",&e1[i].emp_id);
	
		printf("Enter the salary of [%d] employee : ",i);
		scanf("%f",&e1[i].emp_salary);
		
		printf("\n");
	}
	
	for(i=1;i<=n;i++)
	{
		printf("\nName of [%d] employee is : %s",i,e1[i].emp_name);
		printf("\nID of [%d] employee is : %d",i,e1[i].emp_id);
		printf("\nSalary of [%d] employee is : %f",i,e1[i].emp_salary);
		
		printf("\n");
	}
	
	return 0;
}