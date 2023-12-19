
#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\nPre-increment");
	
	int a=1,b;
	
	b=++a;
	
	printf("\na=%d",a);
	printf("\nb=%d",b);
	
	/*
		Here, first of all increment the value of a and then 
			  assigned the incremented value of a in b ....
	*/	
	
	printf("\n\nPost-increment");
	
	int x=1,y;
	
	y=x++;
	
	printf("\nx=%d",x);	  
	printf("\ny=%d",y);	
	
	/*
		Here, First of all assigned the value of x in y then
			  increment the assigned value in x....  
	*/
	
}