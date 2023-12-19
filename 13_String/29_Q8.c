
/*

	Q_8 : Write a program to chek whether a given character is presend in a string or not.
	
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
