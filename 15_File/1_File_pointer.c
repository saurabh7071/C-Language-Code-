
/*
			File I/O
			
		The Random Acess memory is volatile and its content is lost once the program terminates.
	In order to presist the data forever we use files. 
	
	presist -->	store karna...
	
	A file is data stored in a storage device
	
	A C program can talk to the file by reading content from it and writing content ot it.
	
	 __________________			Write		  ___________
	|				  |		---------->		 |			|
	|	C Program 	  |						 |	 file	|
	|_________________|		<----------		 |__________|
								read
								
								
								
								
	File pointer : 
					The 'File' is a structure which needs to be created for opening the file.
				
				A file pointer is a pointer to this strucutre of the file.
				
				[ File pointer is needed for communication between the file and the program..]
				
			A file pointer can be created as follow : 
			
				File *ptr;
				ptr = fopen("File name.ext","mode");
				
				
*/


#include<stdio.h>

int main()
{
	FILE *ptr;
	
//	ptr = fopen("sample.txt","r");	// --->	For reading the file
//	ptr = fopen("sample.txt","w");  // --->	For writing to a file 
	ptr = fopen("sample2.txt","w");
	
	return 0;
													}													