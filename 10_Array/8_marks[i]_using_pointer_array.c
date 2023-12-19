
/*

	Q : Try these operations on another variable by creating pointers in a separate program 
			demonstrate all the four operations.
			
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int marks[6];
	int *ptr[6];
	
	for(int i=0;i<6;i++)
	{
		printf("Enter the marks of student[%d] : ",i);
		scanf("%d",&marks[i]);	
	}
	
	printf("\n");	
	
	for(int i=0;i<6;i++)
	{
		ptr[i]=&marks[i];
		
		printf("\n Marks of student[%d] : %d",i,ptr[i]);
	}
	
	printf("\n");
	
	for(int i=0;i<6;i++)
	{		
		printf("\n Marks of student[%d] : %u",i,*ptr[i]);
	}
	
	return 0;
}			