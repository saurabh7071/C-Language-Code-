
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,age[5];
	
	// for input 
	
	for(i=0;i<5;i++)
	{
		printf("Enter the age of people%d : ",i);
		scanf("%d",&age[i]);
	}
	
	// for output 
	
	for(i=0;i<5;i++)
	{
		printf("\n The age of people%d is : %d",i,age[i]);
	}
}