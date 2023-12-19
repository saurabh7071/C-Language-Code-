
/*

	Strcat() : 
				This function is used to concatenate two strings
				
				char s1[50] = "Hello";
				char s2[]	= "Saurabh";
				
				strcat(s1,s2); 		--->	S1 now contains "HelloSaurabh"
															<No space in between>
															
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char ch1[10] = {'H','E','L','L','O','\0'};
	char ch2[10] = {'B','R','O','T','H','E','R','\0'};
	
	strcat(ch1,ch2);
	
	printf("\nConcatenated string is : %s",ch1);
	
	
	
	printf("\n\n*********************************\n");
	
	
	char s1[50] = "Hello";
	char s2[]	= "Saurabh";
		
	strcat(s1,s2);                	// both string store in s1 
		
	printf("Now the s1 is %s",s1);
		
		
		
		
	printf("\n\n*********************************\n");
		
		
		
		
	char p1[50] = "Hello ";			// dono ke beech space ke liye yaha space dena padega.
	char p2[]	= "Saurabh";
		
	strcat(p1,p2);                	// both string store in s1 
		
	printf("Now the s1 is %s",p1);
		
		
	printf("\n\n*********************************\n");
		
		
	char q1[50] = "Hello";
	char q2[]	= "Saurabh ";
		
	strcat(q2,q1);                	// both string store in q2 
		
	printf("Now the s1 is %s",q2);
	
	
	
	
	printf("\n\n*********************************\n");
	
	
	
	
	char c[100];
	
	printf("\nEnter your string : ");
	gets(c);
	
	char c1[100];
	
	printf("\nEnter your another string : ");
	gets(c1);
	
	strcat(c,c1);
	
	printf("\nNow,Concatenated string is : %s",c);

}															