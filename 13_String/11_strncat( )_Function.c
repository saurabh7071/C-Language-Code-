
/*

	Strncat() : 
	
		
		Concatenates (joins) the first 'n' characters of the second string to first string.
		
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100];
	
	printf("\nEnter the first string : ");
	gets(s1);
	
	char s2[100];
	
	printf("\nEnter the second string : ");
	gets(s2);
	
	strncat(s1,s2,2);	// Here,, 2 means only 2-characters of s2 print with s1.
	
	printf("\nSecond string : %s\n",s2);	// first string 	: saurabh
	printf("\nTarget string : %s",s1);		// second string 	: vaidya
											// Targeting string : saurabhva
	
	
	printf("\n\n*****************************************\n");
	
	
	
	char str1[100];
	
	printf("\nEnter the first string : ");
	gets(str1);
	
	char str2[100];
	
	printf("\nEnter the second string : ");
	gets(str2);
	
	int n;
	
	printf("\nEnter the number of characters of second string join with frist string : ");
	scanf("%d",&n);
	
	strncat(s1,s2,n);										
	
	printf("\nstr2 : %s",str2);
	printf("\nTargeting string : %s",str1);
	
	return 0;
}											