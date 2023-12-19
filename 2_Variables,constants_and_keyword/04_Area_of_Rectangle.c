
# include<stdio.h>
# include<conio.h>

int main()
{
	float  length,breadth;
	float area;
	
	printf("Enter the length and breadth of rectangle :");
	scanf("%f %f",&length,&breadth);
	
	area=length*breadth;
	printf("The area of the Rectangle is :%.3f",area); // %.3f isliye ki point ke bad kitne digit chahiye...
	
	return 0;
}