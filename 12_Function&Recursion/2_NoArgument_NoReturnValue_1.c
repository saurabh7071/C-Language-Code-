
/*
						Different Aspects of function calling 
		
		A function may or may not accept any argument. It may or may not return any value. 
		Based on these facts, there are four different aspects of function calls.
						
			1)	Function without Arguments and without return value
			2)	Function without Arguments and with return value. 
			3)	Function with Arguments and without return value. 
			4)	Function with Arguments and with return value. 
			



	-->	Function without arguments and without return value.
		
		Function with no argument means the called function(Ex :name()) does not receive any 
		data from calling function(Ex : main()) 
	
		and
		
		Function with no return value means calling function (main()) does not receive any 
		data from the called function(name()) so there is no data transfer 
		between calling (main()) and called function (name()).  
		
*/


#include<stdio.h>

void name();
void area();

void main()				// Also write	 void main(void)
{
	printf("you are in main function");
	
	printf("\n\nHello");
	
	name();
	area();
}

void name()
{
	printf(" Saurabh,you are best my brother..");
	printf("\nAlways be Happy :)");
	
	printf("\n\nThis is name function");
}		
void area()
{
	int side,square_area;
	
	printf("\n\n\nNow,You are in function area");
	
	printf("\nEnter the length of side of square : ");
	scanf("%d",&side);
	
	square_area = side * side;
	
	printf("The area of the square is : %d",square_area);
}

/*

		Explanation of area() function : 
		
		    In the above program, area(); function calculates area and no arguments are
		passed to the function. The return type of this function is void and hence return
		nothing. 
*/			 