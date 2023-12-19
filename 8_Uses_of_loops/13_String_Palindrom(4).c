
// C program to chek if the given string is a palindrome or not ..

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char a[50],b[50];
	
	printf("Enter the string :");
	gets(a);
	
	strcpy(b,a);            // Coping input string ....
	strrev(b);              // Reversing the string ....
	
	if(strcmp(a,b)==0)      // Comparing input string with the reverse string...
	{
		printf("palindrome string");
	}
	else
	{
		printf("Not polindrome string");
	}
	 return 0;
}   