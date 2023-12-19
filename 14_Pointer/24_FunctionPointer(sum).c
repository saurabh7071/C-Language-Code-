#include<stdio.h>
#include<conio.h>

int main()
{
	int result,add;
	int (*ptr)(int , int)= &add;
	
	result = ptr(10,20);
	
	printf("%d",result);
}

