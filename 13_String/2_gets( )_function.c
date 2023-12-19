
/*
		gets() Function :  
		
			gets() is a function which can be used to receive a multi-word string 
			
			Multi-word string means -> one than more words with spacing 
											OR
										Puts a string with spacing 
										
									   Ex : Saurabh yograj vaidya 
									   
			char str[30];
			gets(str);		---->	The entered string is stored in str !
			
			Multiple gets() calls will be needed for multiple strings.
			
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	
	printf("Enter your full name with spacing : ");
	gets(str);		// gets() is used for the take input 
	
	printf("Your full name is : %s",str);
	
	return 0;
}			