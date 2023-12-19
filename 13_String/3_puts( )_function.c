

/*
					Puts() function : 
		
		The Puts() function is very much similar to printf() function. 
		The Puts() function is used to print the string on the console.
		
		Puts() can be used to output a string 
		
		puts() function print the output
		
		char str[50];
		puts(str);		--->	Print the string places the cursor on the next line.
		
*/


int main()
{
	char str[100];
	
	printf("Enter your full name with spacing : ");
	gets(str);		// gets() function is used for take the input 
	
	printf("\nThe output is print with the help of puts() function\n\n");
	
	puts(str);		// It is used for print the output 
	
	//printf("Your full name is : %s",str);
	
	
	
	
	printf("\n\n**************************************\n");
	
	
	
	char s[100];
	
	printf("\nEnter your full name with spacing : ");
	gets(s);		// gets() function is used for take the input 
	
	printf("\nThe output is print with the help of puts() function\n\n");
	
	printf("Your full name is : ");
	puts(s);		// It is used for print the output 
	
	
	return 0;
}					 