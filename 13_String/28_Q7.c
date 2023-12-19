
/*

	Q_7 : Write a program to count the occurence of a given character in a string.
	
*/

#include<stdio.h>

int occurrence(char str[],char ch)
{
	char *ptr = str;
	int count = 0;
	
	while(*ptr != '\0')
	{
		if(*ptr == ch)
		{
			count++;
		}
		
		ptr++;
	}
	
	return count;
}
int main()
{
	char str[] = "Saurabh";
	
	int count = occurrence(str,'a');	// occurrence matlab diya huaa character kitne bar string me aaya hai ..
	
	printf("Occurrence is : %d",count);
	
	return 0;
}	