
/*

							String 
							
							
							
		In C programming, a string is a squence of characters terminated with null character \0.
		
		For example : char c[] = "C string";
				
							when the compiler encounters a sequence of characters enclosed in 
						the double quotation makes, it appends a null character \0 at the 
						end by default.
						
		
		In other words 
		
		
		The string can be defined as the one-dimensional array of characters terminated by
		the null ('\0'). 
		
		'\0' ---> This is null character 
		
		Null character is used to denote string terminating character are stored in 
		continuous memory locations.
		
		The character array or the string is used to manipulate text such as
		word or sentences.
		
		Each character in the array occupies one byte of memory, and the
		last character must always be \0. 
		
		The termination character (\0) is important in a string since it is the only way
		to identify where the string ends. 
		
		When we define a string as char s[10] the character s[10] is implicitly initialized 
		with the null in the memory. 
		
		There are two ways to declare a string in C language :
		
			1)	By char array
			2)	By string literal   
			
	
	Difference between char array and string literal 
	
		There are two main differences between char array and literal 
			
			1)	We need to add the null character '\0' at the end of the array by ourself
				whereas, it is appended internally by the compiler in the case of the 
				character array. 
				
			2)	The string literal cannot be reassigned to another set of character whereas,
				we can reassign the characters of the array.
							
	Initializing Strings : 
	
		Since string is an array of character, it can be initialized as follows : 
		
		char s[] = {'s', 'a', 'u', 'r', 'a', 'b', 'h', '\0'};
		
		There is another shortcut for initializing string in C Language :
		
		char s[] = "SAURABH";	--->	in this case C adds a null character automatically.
		
		
	Strings in Memory : 
	
		A string is stored just like an array in the memory as shown below : 
						
												Null character
		S     A     U     R     A     B     H    \n
	   82210 82211 82212 82213 82214 82215 82216 82217		
	   				Contiguous blocks in memory 
					   
*/	


// Quick Quiz : Create a string using " " and print its content using a loop.


#include<stdio.h>
#include<string.h>

int main()
{
	char ch[] = {'I','N','D','I','A','\0'};
	char ch1[] = "INDIA";
	
	printf("Char array value is : %s\n",ch);
	printf("String Literal value is : %s\n",ch1);
	
	
	
	printf("\n\n*******************************************\n");
	
	
	
	char str[] = "Saurabh";
	
	//char str[] = {'S','A','U','R','A','B','H','\0'};
	
	char *ptr = str;
	
	while(*ptr != '\0')
	{
		printf("%c",*ptr);
		
		*ptr++;
	}
	
	
	
	printf("\n\n*******************************************\n");
	
	
	
	printf("\nPrinting String");
	
	//Char str[] = "Saurabh";
	printf("\n%s",str);	
	
	
	
	printf("\n\n*******************************************\n");
	
	
	
	printf("\nTaking string input from the user without spacing");
		
	printf("\nEnter your name : ");
	scanf("%s",&str);
		
	printf("\nYour name is %s",str);
	
	
	
	printf("\n\n*******************************************\n");
	
	
	char s[100];
	
	printf("\nEnter your string without spacing : ");
	scanf("%[^\n]",s);
	
	printf("\nYou entered : %s",s);
	

}

/*
	
	Printing String : 
	
			A string can be printed character by character using printf and %c 
			But 
			there us another convenient way to print string in C.
			
			Char str[] = "Saurabh";
			printf("%s",str);			--->	Prints the enter string 
			
   		
	Taking string input from the user :
	
		We can use %s with scanf to take string input from the user.
			
			
			char str[50];
			
			printf("Enter you name : ");
			scanf("%s",&str);
			
		Scanf automatically adds the null character (\0) when the enter key is pressed.
		
		
	Note : 
	
			1)	The string should be short enought to fit into the array.
				Ex : char str[3] = "Hello" ----> this show error 
				
			2)	Scanf cannot be used to input multi-word string with spaces.	
				Ex : Enter your name : Saurabh vaidya ---> program is written above 
					 Your name is : Saurabh 		  ---> it is not print any char after spacing 
															they automatically terminate.
			
				For print the multi-word string we used the gets() and Puts() function.
					 
*/			
	   									