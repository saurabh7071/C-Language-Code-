
/*
	fgetc() and fput() : 
	
						fgetc and fputc are used to read and write a character from/to a file...
						
					fgetc(ptr) 		---->	Used to read a character from file
					
					fputc('c',ptr)	---->	Used to write character 'c' to the file 

*/



#include<stdio.h>

int main()
{
	FILE *ptr;
	
	ptr = fopen("getcdemo.txt","r");
	
	char c;
	
	c = fgetc(ptr);
	
	printf("The value of my character is : %c",c);
	
	return 0;
}