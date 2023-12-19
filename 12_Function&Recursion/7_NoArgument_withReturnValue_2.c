
// No Argument and with return value 

// Program to calculate the area of the square.


#include<stdio.h>
#include<conio.h>

int square();

int main()
{
	printf("\nyou are in main function");
	
	float area;
	area = square();
	printf("\nArea of square is : %.3f",area);
	
	printf("\nNow you are again in main function"); 
	
	return 0;
} 

int square()
{
	float side,area;
	
	printf("\n\nNow you are in square in function");
	
	printf("\nEnter the length of the side in meter : ");
	scanf("%f",&side);
	
	area = side * side;
	
	return area;
}