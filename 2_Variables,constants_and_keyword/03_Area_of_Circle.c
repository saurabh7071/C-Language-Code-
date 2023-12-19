



# include<stdio.h>
# include<conio.h>

int main()
{
	float radius;
	float pi=3.14;
	float area;
	
	printf("Enter the radius :");
	scanf("%f",&radius);
	
	area=pi*radius*radius;
	
	printf("The area of the circle is :%f",area);
	
	return 0;
}