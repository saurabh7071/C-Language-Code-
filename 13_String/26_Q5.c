
/*

	Q_5 : Write a program to encrypt a string by adding 1 to the ascii value of its character.
	
*/


#include<stdio.h>

void encrypt(char *str)
{
	char *ptr = str;
	
	while(*ptr != '\0')
	{
		*ptr = *ptr+1;
		
		ptr++;
	}
}

int main()
{
	char str[] = "I Call You Back";
	
	encrypt(str);
	
	printf("\nEncrypted string is : %s",str);
	
	return 0;
}	