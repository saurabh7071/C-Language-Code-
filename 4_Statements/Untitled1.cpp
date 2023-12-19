#include<stdio.h>

int main()
{
	int a=10,b=20;
	int choice;
	
	printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Reminder\n");
	
	while(1)
	{
		printf("\nEnter choice : ");
		scanf("%d",choice);
		
 	if(choice == 1)
 	{
 		printf("\nAddtion of a+b = %d",a+b);	
	}
	else if(choice == 2)
	{
		printf("\nSubstraction of a-b = %d",a-b);
	}
	else if(choice == 3)
	{
		printf("\nMultiplication of a*b = %d",a*b);
	}
	else if(choice == 4)
	{
		printf("\nDivision of a/b = %d",a/b);
	}
	else if(choice == 5)
	{
		printf("\nReminder of a%b = %d",a%b);
	}
	else if(choice == 6)
	{
		printf("\nExit point");
		break;
	}
	else
	{
		printf("\nEnter your correct choice");
	}
	}
	 return 0;
}
