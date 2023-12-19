
/*

	Q_5(a) :- Program to find and print area, perimeter and volume of 
				geometric objects.
				
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	float length,breadth,height;
	float area,perimeter,volume;
	
	printf("Enter the Length of Rectangle : ");
	scanf("%f",&length);
	
	printf("Enter the Breadth of Rectangle : ");
	scanf("%f",&breadth);
	
	printf("Enter the Height of Rectangle : ");
	scanf("%f",&height);
	
	area=length*breadth;
	perimeter=2*(length+breadth);
	volume=length*breadth*height;
	
	printf("\n The Area of Rectangle is %.2f",area);
	printf("\n The Perimeter of Rectangle is %.2f",perimeter);
	printf("\n The Volume of Rectange is %.2f",volume);
	
	return 0;	
}				