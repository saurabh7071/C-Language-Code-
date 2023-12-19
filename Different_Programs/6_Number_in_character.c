
/*
		C Program to convert Number in Characters
		
	
	System("cls") :- 
		
	"cls" means , clear screen.Every time this piece of code is processes whatever is written
	 in your scrren will get cleared and the remaining portion of code's output if any will
	  be displayed.
	  
*/	  
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,r,sum=0;
	
	system("cls");
	
	printf("Enter the any number from 0 to 9 : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	
	n=sum;
	
	while(n>0)
	{
		r=n%10;
		
		switch(r)
		{
			case 0:
				{
					printf("zero");
					break;
				}	
			case 1:
				{
					printf("one");
					break;
				}	
			case 2:
				{
					printf("two");
					break;
				}
			case 3:
				{
					printf("three");
					break;
				}
			case 4:
				{
					printf("four");
					break;
				}
			case 5:
				{
					printf("five");
					break;
				}
			case 6:
				{
					printf("six");
					break;
				}
			case 7:
				{
					printf("seven");
					break;
				}	
			case 8:
				{
					printf("eight");
					break;
				}				
			case 9:
				{
					printf("nine");
					break;
				}				
			
			default:
				{
					printf("tttt");
					break;	
				}			
		}
		
		n=n/10;
	}
	
	return 0;
}