
/*
	
	strlwr() : 
				The strlwr(string) function returns string characters in lowercase
				
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	
	printf("\nEnter the string in upparcase : ");
	gets(str);
	
	printf("\nString is : %s",str);
	
	printf("\nLower String : %s",strlwr(str));
	
	return 0;
	
}				