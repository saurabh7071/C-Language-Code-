
/*
						Traversing String 
						
		Traversing the string is one of the most important aspect in any of the programming
	language. We may need to manipulate a very large text which can be done by traversing the
	text. Traversing string is somewhat different from the traversing an integer array. 
	We need to know the length of the array to traverse an integer array. Whereas we may use
	the null character in the case of string to identify the end of the string and terminate
	the loop.
	
		Hence, there are two ways to traverse a string :
		
			1)  By using the length of string 
			2)	By using the null character
			
*/


#include<stdio.h>
#include<string.h>

int main()
{
	// Using the length of string 
	
	char str[100];

	printf("Enter the string : ");
	gets(str);
		
	int i=0,count=0;
	
	while(i<100)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			count++;
		}
		
		i++;
	}
	
	printf("The number of vowels are : %d",count);
	
	
	
	printf("\n\n***********************************************\n");
	
	
	// Using the null character
	
	char s[100];

	printf("\nEnter the string : ");
	gets(s);
		
	int j=0,add=0;
	
	while(s[j] != NULL)
	{
		if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
		{
			add++;
		}
		
		j++;
	}
	
	printf("The number of vowels are : %d",add);
	
}							