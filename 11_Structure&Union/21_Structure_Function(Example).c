
#include<stdio.h>
#include<conio.h>


struct student
{
	int stu_rollnum;
	char stu_name[50];
	char stu_branch[10];
	char stu_section;
	double stu_mobilenum;
};

void ask();

int main()
{
	ask();
	
	return 0;
}

void ask()
{
	int i,n;
	
	struct student s[i];
	
	printf("Enter the Number of students for details : ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		printf("--> Please enter the details of student [%d] <--",i);
		
		printf("\n\nEnter the roll Number of student [%d] : ",i);
		scanf("%d",&s[i].stu_rollnum);	
		
		printf("Enter the Name of student [%d] : ",i);
		scanf("%s",&s[i].stu_name);
		
		printf("Enter the brance of student [%d] :",i);
		scanf("%s",&s[i].stu_branch);
		
		printf("Enter the section of student [%d] :",i);
		scanf("%s",&s[i].stu_section);
		
		printf("Enter the Mobile Number of student [%d] :",i);
		scanf("%d",&s[i].stu_mobilenum);
		
		printf("\n");
	}
	
	printf("\n\n>>>>>> Details of Students <<<<<<\n\n");
	
	for(i=1;i<=n;i++)
	{
		printf("\nRoll_Number of student is : %d",s[i].stu_rollnum);
		printf("\nName of student is : %s",s[i].stu_name);
		printf("\nBranch of student is : %s",s[i].stu_branch);
		printf("\nSection of student is : %c",s[i].stu_section);
		printf("\nMobile_Number of student is : %d",s[i].stu_mobilenum);
		
		printf("\n");
	}
};
