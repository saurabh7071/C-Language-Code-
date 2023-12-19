

/*

	
	strstr() : 
				Finds the first occurrence of the second string in first string 
				
				The strstr() function returns pointer to the first occurrence of the matched string in the 
			given string. It is used to return substring form first match till the last character.
			
			
		String strstr() parameters : 
		
									char *strstr( const char *string , const char *match)
									
					string : It represents the full string from where substring will be searched
					
					match : It represents the substring to be searched in the full string
					
					
					Ex : 
							using strstr() function :
							
							
							Enter your string 		: 	My name is saurabh yograj vaidya 
							Enter string for match 	: 	saurabh 
							output is 				: 	saurabh yograj vaidya 
							
							
							Enter your string 		: 	Hello guys
							Enter string for match	: 	l
							output is 				:	llo guys 								
				
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100];
	
	printf("\nEnter your first string : ");
	gets(s1);
	
	char s2[100];
	
	printf("\nEnter your string for match : ");
	gets(s2);
							
	char *p;
	
	p = strstr(s1,s2);
	
	printf("\nSubstring is : %s",p);
	
	return 0;
}				