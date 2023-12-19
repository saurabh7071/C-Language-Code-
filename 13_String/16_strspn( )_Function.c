
/*

	strspn() : 
				returns the length of the initial part of the first string only
	   				containing the characters of the second string
					   
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char s1[] = "123abc90";
	
	char s2[] = "123456790";
	
	int i;
	
	i = strspn(s1,s2);
	
	printf("%d",i);
	
	return 0;
	
	
						}					    