
/*
	
	strrev() : 
				The strrev(string) function returns reverse of the given string
				
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	
	printf("\nEnter your string : ");
	gets(str);
	
	printf("\nString is : %s",str);
	
	printf("\nReverse String is : %s",strrev(str));
	
	return 0;
}				