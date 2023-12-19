
/*
	
		--->	Function with arguments and No return value
		
		Here function will accept data from the calling function (Ex : main()) as there are 
		arguments, however since there is no return type nothing will be returned to the 
		calling program (main()). So it's a one-way type communication.
		
*/


#include<stdio.h>
#include<conio.h>

void area(int square_side);						// Function prototype

int main()
{
	int square_side;
	
	printf("Enter the length of side of square : ");
	scanf("%d",&square_side);							
	
	area(square_side);							// Function call
	
	return 0;	
}		

void area(int square_side)						// Function definition 
{
	int area;
	
	area = square_side * square_side;
	
	printf("Area of Square : %d",area);
}

/*
	Explanation :
				 In this function, the integer value entered by the user in square_side 
			variable is passed to area(); The function has void as a return type as a result
			it does not return value. 
			
*/

			