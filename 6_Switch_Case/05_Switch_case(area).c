
#include<stdio.h>
#include<conio.h>

int main()
{
	float area, length, breadth, radius, base , height,pi=3.14;
	int choise;
	
	printf("1.Area of Circle    \n");
	printf("2.Area of Triangle  \n");
	printf("3.Area of Rectangle \n");
	
	printf("\n Enter your choise :");
	scanf("%d",&choise);
	
	switch(choise)
	{
		case 1:
				printf("Enter the Radius of the circle :");
				scanf("%f",&radius);
				
				printf("The value of pi is :%.2f\n",pi);
				area = pi*radius*radius;
				
				printf("The area of the circle is :%.2f",area);
				break;
				
		case 2:
				printf("Enter the base and height of triangle :");
				scanf("%f %f",&base,&height);
				
				area = 0.5*base*height;
				
				printf("The area of the Triangle is :%.2f",area);
				break;
				
		case 3:
				printf("Enter the length and breadth of rectangle :");
				scanf("%f %f",&length,&breadth);
				
				area = length*breadth;
				
				printf("The area of the Rectangle is :%.2f",area);
				break;
		default:
				printf("Your choise is Invalid");				 		
	}
	return 0;
}