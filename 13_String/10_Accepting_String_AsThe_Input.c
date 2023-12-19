
#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	
	printf("\nEnter your string : ");
	scanf("%[^\n]",s);					// spacing in string also print here 
	
	printf("\nYou entered : %s",s);
	
	
	printf("\n\n****************************************\n");
	
	
	char str[100];
	
	printf("\nEnter your string without spacing : ");
	scanf("%s",s);
	
	printf("\nYou entered : %s",s);
	
	return 0;
}