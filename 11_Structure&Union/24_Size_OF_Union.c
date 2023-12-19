
/*

						Deciding the size of the union
						
		
	The size of the union is based on the size of the largest member of the union.
	
	
	
	
	
		
	As we know, the size of the int is 4 byte, size of char is 1 byte, size of float is
	4 bytes, and the size of double is 8 bytes. Since the double variable occupies the
	largest memory among all the four variables, so total 8 bytes will be allocated in
	the memory. Therefore, the output of the variable would be 8 bytes. 
		
**/

	
#include<stdio.h>
#include<conio.h>

union abc
{
	int a;
	char b;
	float c;
	double d;
};

int main()
{
	printf("Size of union abc is %d",sizeof(union abc));
	
	return 0;		
}	