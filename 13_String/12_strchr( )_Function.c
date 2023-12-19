
/*
	
		strchr() : 
		
					Returns a pointer to the first occurrence of the character in the string 
					and
					Returns NULL if the character is not found in the string .
					
					Ex :   enter string : Hello
						   enter character : l
						   output is : llo
					
*/

// using strchr() function :

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	
	printf("\nEnter your string : ");
	gets(str);
	
	char ch;
	
	printf("\nEnter the character which you want to in string : ");
	scanf("%c",&ch);
	
	char *p;							// Entered string : saurabh
										// Enter character : 'r'
	p = strchr(str,ch);					// output : rabh
	
	printf("\n%s",p);					// Enter character : 'a'
										// output : aurabh
	return 0;
										//	Enter character : 'p'
}										// output : NULL
										
			
	
										
										
