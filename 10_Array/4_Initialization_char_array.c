/*
	The null character '\0' also known as terminator .
	
		'\0' is zero character in C it is mostly used to indicate the termination of
			a character string or also indicate the end of the string.
*/
	
#include<stdio.h>
#include<conio.h>

int main()
{
	char arr[]={'a','e','i','o','u','\0'}; 
	
	printf("\n arr[0] = %c",arr[0]);
	printf("\n arr[1] = %c",arr[1]);
	printf("\n arr[2] = %c",arr[2]);
	printf("\n arr[3] = %c",arr[3]);
	printf("\n arr[4] = %c",arr[4]);
	
	printf("\n\n ***\n");
	
	for(int i=0;i<5;i++)
	{
		printf("\n arr[%d] = %c",i,arr[i]);
	}
	
	
	printf("\n\n ************************************* \n");
	
	
	char name[]="Saurabh yograj vaidya";
	
		for(int i=0;i<21;i++)
	{
		printf("%c",name[i]);
	}

	return 0;
}