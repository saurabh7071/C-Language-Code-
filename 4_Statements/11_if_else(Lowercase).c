/* 
	Write a programm to determine whether a character entered by the user is lowecase 
		or not 
		
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int ch;
	
	printf("Enter the character :");
	scanf("%c",&ch);
	
	if(ch<=122 && ch>=97)	
	{
		printf("It is Lowercase");
	}
	else
	{
		printf("It is not Lowercase");
	}
		return 0;
}		