
#include<stdio.h>
#include<conio.h>

int main()
{
	int marks;
	int grade;
	
	printf("Enter the marks :");
	scanf("%d",&marks);
	
	switch(marks/10)
	{
		case 10:
		
		case 9:	
				// marks>=90 && marks<=100;
					printf("your grade is A+");
					break;
				
		case 8:
				// marks>=80 && marks<=90;
					printf("Your grade is A");
					break;
				
		case 7:
				// marks>=70 && marks<=80;
				printf("Your grade is B+");
				break;
				
		case 6:
				// marks>=60 && marks<=70;
				printf("Your grade is B");
				break;
				
		case 5:
				// marks>=50 && marks<=60 ;
				printf("Your grade is C+");
				break;
				
		case 4:
				// marks>=40 && marks<=50 ;
				printf("Your grade is C");
				break;
				
		case 3: 
				// marks>=30 && marks<=40 ;
				printf("Your grade is D");
				break;
				
		case 2:
				// marks<=30;
				printf("You are Fail :)");
				break;
		
		case 1:
				printf("Sale Padhai Chod de :)");
				break;
						
	 	default:
		 		printf("Enter the correct marks ");																		
	}
}