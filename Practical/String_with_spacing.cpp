#include<stdio.h>
#include<string.h>
int main()
{
 	char str[100];
	 printf("Enter your string : ");
	 scanf("%[^\n]%*c",&str);
	 printf("%s\n",str);
 	return 0;
}

/*							**  %[^\n]%*c  ** 
	
	* It is used to accept string which have whitespace in between. %s can't do that so this is used. 
	
	* Generally, it is not possible to read a series of words(sentence in specific) using a simple scanf(). 
		When we use scanf() to read a line, it reads till a white space is reached. The remaining part of the sentence is not read. 
		So, rather than using a for loop to read a sentence with a simple scanf(), we use scanf ("%* [^\n] %*c").Here, “\n" represents 
		that a sentence is read till a new line is reached and %*c represents that, it reads series of characters.
		
*/
