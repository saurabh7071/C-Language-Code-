
/*

	strcspn() :
				returns the length of the initial part of the first string not containing any of the 
				character of the second string.
			
			Ex :												1234567
				Enter your string 							: 	Saurabh
				Enter character for matching 				: 	u
				position of entered character in sting is 	:	3
					with the help of strcspn() function				
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100];
	
	printf("\nEnter your string : ");
	gets(s1);
	
	char s2[10];
	
	printf("\nEnter characters for matching with string : ");
	scanf("%c",s2);
	
	int n;
	
	n = strcspn(s1,s2);
	
	printf("\nThe first character is matched at : %d",n);
	
	return 0;
}				