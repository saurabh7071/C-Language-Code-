/*
	Take name and salary of two employee as input from the user and write them to a text file in the
	following format :
	
						name1 , 3300
						name2 , 7700
						
*/


#include<stdio.h>

int main()
{
	char name[100];
	float salary;
	int i;
	
	for(i=0;i<2;i++)
	{
		printf("Enter the name of employee : ");
		scanf("%s",&name[i]);
	
		printf("Enter the salary of employee : ");
		scanf("%f",&salary);
		
		printf("\n");
	}
	
	FILE *ptr;
	
	ptr = fopen("textfile.txt","w");
	
	if(ptr == NULL)
	{
		printf("File does not exist");
		return 1;
	}
	
	for(i=0;i!=EOF;i++)
	{
		fprintf(ptr,"Name of employee : %s",name);
		fprintf(ptr,"salary of employee : %f",salary);
	}
	fclose(ptr);
	
	return 0;		
	
}						