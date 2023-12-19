
//	Program to calculate the sum of array elements by passing to a function.

#include<stdio.h>
#include<conio.h>

float calculate_sum(float num[]);

int main()
{
	float num[]={23.4,55,22.6,3,40.5,18};
	float result;
	
	result=calculate_sum(num);
	
	printf("Result : %.3f\n",result);
	
	return 0;
}

float calculate_sum(float num[])
{
	float sum=0;
	
	for(int i=0;i<6;i++)
	{
		sum = sum+num[i];
	}
	
	return sum;
}