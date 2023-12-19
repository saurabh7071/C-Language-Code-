
/*

				Array in Structures 

	Just like a array of integers, an array of float and an array of characters, we can creat
	an array of structures.
	
	An array of structures in C can be defined as the collections of multiple structures 
	variablers where each variable contains information about different entities.
	
	The array of structures in C are used to store information about multiple entities of 
	different data types.
	
	
	Initialization Structures : 
		
		struct employee saurabh = {100 , 71.22 , "saurabh"};
		
		struct employee rajesh = {0};  -------->   all elements set to 0 
		
*/


#include<stdio.h>
#include<conio.h>

struct student
{
	int roll_num;
	char name[50];
};

int main()
{
	int i,n;
	struct student s[i];
	
	printf("Enter the number of students : ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the roll_number of student [%d] : ",i);
		scanf("%d",&s[i].roll_num);
		
		printf("Enter the name of student [%d] : ",i);
		scanf("%s",&s[i].name);
		
		printf("\n");
	}		
	
	printf("\n\n Students information List\n\n");
	
	for(i=1;i<=n;i++)
	{
		printf("\nRoll Number of student : %d",s[i].roll_num);
		printf("\nName of student : %s",s[i].name);
		
		printf("\n");
	}
	
	return 0;
}		 
	
