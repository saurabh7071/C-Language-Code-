
/*
	Q_2 : Write your own version of strlen function from <string.h>
	
*/

#include<stdio.h>
#include<string.h>

int str_len(char *str);

int main()
{
	char str[100];
	int length;
	
	printf("\nEnter your string : ");
	gets(str);
	
	length = str_len(str);
	
	printf("\nThe length of this string is : %d",length);
	
	return 0;
}

int str_len(char *str)
{
	char *ptr = str;
	int length=0;
	
	while(*ptr != '\0')
	{
		length++;
		ptr++;
	}
	
	return length;
}	