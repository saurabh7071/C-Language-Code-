

//	Q1 : Write a program to read the integers from a file...


#include<stdio.h>

int main()
{
	int a,b,c;
	
	FILE *ptr;
	
	ptr = fopen("read.txt","r");
	
	fscanf(ptr , "%d %d %d" , &a,&b,&c);
	
	printf("\nThe values of a b and c is %d %d %d",a,b,c);
	
	return 0;
}