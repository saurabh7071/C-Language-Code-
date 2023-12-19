
/*

		--->	Function with Argument and with return value. 
		
		Function with arguments and one return value means both the calling function and 
		called function will receive data from each other. It's like a dual communication.
		
*/


#include<stdio.h>
#include<conio.h>

int area(int square_side);

int main()
{
	int square_area,square_side;
	
	printf("You are in main function");
	
	printf("\nEnter the length of side of square : ");
	scanf("%d",&square_side);
	
	square_area = area(square_side);
	
	printf("\n\nYou are again in main function");
	
	printf("\nThe area of square is : %d",square_area);

	return 0;
}

int area(int square_side)
{
	printf("\n\nNow you are in area function");
	
	int square_area;
	
	square_area =square_side * square_side;
	
	return square_area;	
}		