
/*

	Q_7 :- Program to swap two numbers.
	
*/



#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,swap;
	
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	printf("\n Before Swaping :%d %d",a,b);
	
	swap=a;
	a=b;
	b=swap;
	
	printf("\n After Swaping :%d %d",a,b);
	
	return 0;
}	