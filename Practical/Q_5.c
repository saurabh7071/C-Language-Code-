
/*

	Q_5 :- Basic program on Operator using scanf().
	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	int add,sub,multi,div,mod;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	add=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	mod=a%b;
	
	printf("\n Addition = %d ",add);
	printf("\n Substraction = %d ",sub);
	printf("\n multiplication = %d ",multi);
	printf("\n Division = %d ",div);
	printf("\n Remainder = %d ",mod);
	
	return 0;
		
}	