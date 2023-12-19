
/*
	
						Standerd Library functions for strings 
						
						
		C Provides a set of standard library functions for string manipulation 
		
		Some of the most commonly used string functions are : 
		
		1)	strlen()	-->		count the number of characters in string / returns the length of string 
		
		2)	strcpy()	-->		copy the content of second string into first string
		3)	strncpy()	-->		copies the first 'n' characters of the second string to the first string
		
		4)	strcmp()	-->		compare the first string with second string
	
		5)	strcat()	-->		Joins the first string with second string
		6)	strncat()	-->		Joins the first 'n' characters of the second string to the first string 
		
		7)	strrev()	-->		returns reverse string
		
		8)	strlwr()	-->		returns string characters in lowercase
		
		9)	strupr() 	-->		returns string characters in upparcase	
		
	   10)	strstr() 	-->		Find the first occurrence of the second string in first string 
	   
	   11)	strcspn()	-->		returns the length of the initial part of the first string not
	   							containing any of the character of the second string
	   12)	strspn()	-->		returns the length of the initial part of the first string only
	   							containing the characters of the second string  							
	   							
	   13)	strchr()	-->		returns a pointer to the first occurrence to the character in the string 	
	   14)	strrchr()	-->		returns a pointer to the last occurrence to the character in the string 
	   
	   15)	strpbrk() 	-->		returns the first occurrence of any of the character of second string
	   							in the first string
	   
	   16)	strtok() 	-->		Finds second string in first string and returns a pointer to it and
	   							returns NULL if not found
	   							
	   							
	   							
	   							
	Strlen() : 
				This function is used to count the number of characters in the string 
				excluding the null ('\0') character. 
				
				int length = strlen(str);
				
				This function are declared under <string.h> header file.
				
*/		


#include<stdio.h>
#include<string.h>

int main()
{
	int str_length;
	
	char str[100];
	
	printf("Enter the string : ");
	gets(str);
	
	str_length = strlen(str);
	
	printf("The length of string is %d",str_length);
	
	return 0;
}		 			