
/*

	strpbrk() :
				returns the first occurrence of any of the character of second string
	   							in the first string
	   							
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char s1[] = "Hey 123 saurabh";
	char s2[] = "123456790";
	
	char *p;
	
	p = strpbrk(s1,s2);
	
	printf("\n%s",p);
	
	return 0;
								   }	   							