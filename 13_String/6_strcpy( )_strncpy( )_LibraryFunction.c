
/*
	
	Strcpy() : 
				This function is used to copy the content of second string into first string
				passed to it. 
				
				char source[] = "Saurabh";
				char target[50];
				strcpy(target,sourch);		----->	target now continues "Saurabh"
				
				
				target string should have enough capacity to store the source string.
								
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char copy[100] = {'S','A','U','R','A','B','H','\0'};
	char str[100];
	
	strcpy(str, copy);
	
	printf("Now,The str is : %s",str);
	
	
	
	printf("\n\n********************************\n");
	
	
	
	char *ptr = "Saurabh";
	char s[100];
	
	strcpy(s , ptr);
	
	printf("\nNow, the copied string is : %s",s);
	
	
	
	printf("\n\n********************************\n");
	
	
	
	char s1[100];
	
	printf("\nEnter your string with spacing : ");
	gets(s1);
	
	char s2[100];
	
	strcpy(s2,s1);
	
	printf("\nNow,The copied string is : %s",s2);
	
	
	
	printf("\n\n********************************\n");

	
	//	by using strncpy() function :  
		
	char a1[100];
	
	printf("\nEnter your stirng : ");
	gets(a1);
	
	char a2[100];
	
	strncpy(a2,a1,2);	
	
//	a2[2] = '\0';	--->	Please note that we have added the null character '\0' manually.

	printf("\na1 string : %s",a1);
	printf("\nTarget string : %s",a2);
	
	return 0;
}				