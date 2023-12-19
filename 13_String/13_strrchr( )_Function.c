
/*

	strrchr() : Returns a pointer to the last occurrence of the character in the string 
					and 
					Returns NULL if the character is not found in the string 
					
					Ex :   enter string : Hello
						   enter character : l
						   output is : lo
						   
*/
	
	
// using strrchr() function : 

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	
	printf("\nEnter your string : ");
	gets( str1);
	
	char ch1;
	
	printf("\nEnter the character which you want to in string : ");
	scanf("%c",&ch1);	
	
	char *ptr;
	
	ptr = strrchr(str1,ch1);			// Entered string : saurabh
										// Enter character : 'r'
	printf("\n%s",ptr);					// output : rabh
	
	return 0;							// Enter character : 'a'
										// output : abh
}	
										//	Enter character : 'p'
										// output : NULL
										
	

	
	
	
	
	
