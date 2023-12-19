
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[50];
	
	printf("Enter the string :");
	gets(str);
	
	if(ispalindrom(str))
	{
		printf("It is a Palindrom ");
	}
	else
	{
		printf("It is not a Palindrom ");
	}
}

int ispalindrom (char str[])
{
	int i,length;

	length=strlen(str);

	for(i=0;i<length/2;i++)
	{
		if(str[i] != str[length-1-i])
		return 0;                     // agar ye return 0 nahi chala kyuki if condition
	}								  // kabhi true hi nahi huii to condition hamesha
	return (1);						  // false hi hoti rahi jis vajah se loop ke bahar
}									  // aa gaye...