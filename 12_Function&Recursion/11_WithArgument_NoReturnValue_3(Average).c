

//	Function with Argument and without return value


#include<stdio.h>
#include<conio.h>

void average(int a,int b,int c,int d,int e);

int main()
{
	int a,b,c,d,e;
	
	printf("You are in main function");
	
	printf("Enter five number : ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	average(a,b,c,d,e);
	
	return 0;
}

void average(int a,int b,int c,int d,int e)
{
	float avg;
	
	avg = (a+b+c+d+e)/5;
	
	printf("The average of given five numbers : %.2f",avg);
}