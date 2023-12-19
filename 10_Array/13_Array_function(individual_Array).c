
// Pass individual Array Elements 

#include<stdio.h>
#include<conio.h>

void display(int age1,int age2);

int main()
{
	int age_array[]={2,8,4,12};
	
	display(age_array[1],age_array[2]);
	
	return 0;
}

void display(int age1,int age2)
{
	printf("age_array[1] :%d\n",age1);
	printf("age_array[2] :%d\n",age2);
}