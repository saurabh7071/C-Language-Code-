#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverse(char *a)
{
	if(*a)   // To transvers till the last char of the string input..
	{
		reverse(a+1);     // To the to the next character..
		printf("%c",*a);  // To print from the last... 
	}
	
}

int main()
{
	char a[50];   // An array which can store 50 characters ...
	
	printf("Enter the String :");
	scanf("%[^\n]s",a);  // To scan the string with spaces ...
	reverse(a);  // Recursive function call ...
	return 0;  
}