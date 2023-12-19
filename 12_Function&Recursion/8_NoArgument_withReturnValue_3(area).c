
// function without argument and with return value. 

#include<stdio.h>
#include<conio.h>

int area();

int main()
{
	printf("You are in main function");
	
	float square_area;
	
	square_area = area();
	
	printf("\nYou are again in main function");
	
	printf("\nThe area of the square is : %.3f",square_area);
	
	return 0;
}

int area()
{
	float side,square_area;
	
	printf("\n\nNow,you are in area function");
	
	printf("\nEnter the length of side of square : ");
	scanf("%f",&side);
	
	square_area = side * side;
	
	return square_area;
}

/*

			Explanation of above program
			
		In this function int area(); no arguments are passed but it return an integer value 
		square_area.
		
*/			