
/*

	strupr() : 
				The strupr(string) function returns string characters in uppercase
				
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	
	printf("\nEnter the string in lowercase : ");
	gets(str);
	
	printf("\nString is : %s",str);
	
	printf("\nUppar string is : %s",strupr(str));
	
	return 0;
				
}				 