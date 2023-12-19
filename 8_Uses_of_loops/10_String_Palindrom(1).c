
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[30];
	int i,length;
                                           // Example :		
	printf("Enter the string :");         // string = nayan
	gets(str);                            
	                                                       //     length 0 1 2 3 4 5    \0 --> null char  
	length=strlen(str);                   // length of string is 5 -->   a b c b a \0
	
	for(i=0;i<length/2;i++)               // Break the string length in half
	{
	 	if(str[i]!=str[length-1-i])       // comparison  
	 	{ 
	 	 printf("It is not a String palindrome");
	 	 break; 									// length = 5	
		}											// 			i       length-1-i 		
    }												
	if(i==length/2) 								//		str=[0]	  ----> str=[4]
	 printf("It is a String palindrome");			//      str=[1]   ----> str=[3]
}													//      str=[2]   ----> str=[2]
													// now i is equal to length-1-i
													// and it is string palindrome.
													//          and 
												// if str=[0] is not equal to str=[4]
												// ex :- str[0]=a and str[4]!=a then
												// it is not palindrom string.
													