
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[50];
	
	printf("Enter the String :");
	gets(str);
	
	strrev(str);

	printf("The reverse String is :%s",str);	
}

