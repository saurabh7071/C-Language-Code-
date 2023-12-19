
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	int add,substract,multiply,divide;
	int choice;
	
	printf("1.addtion \n");
	printf("2.Substraction \n");
	printf("3.Multiplication \n");
	printf("4.Division \n");
	
	
	printf("\n Enter the value of a and b :");
	scanf("%d%d",&a,&b);
	
	printf("Enter your choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
			case 1:
					add=a+b;
					printf("Additon :%d",add);
					break;
			
			case 2:	
					substract=a-b;
					printf("Substraction :%d",a-b);
					break;
					
			case 3:
					multiply=a*b;
					printf("Multiplication :%d",a*b);
					break;
					
			case 4:
					divide=a/b;
					printf("Divide :%d",a/b);
					break;		
									
			default:
					printf("Enter correct choice");
					break;
							
	}
	
	return 0;
}