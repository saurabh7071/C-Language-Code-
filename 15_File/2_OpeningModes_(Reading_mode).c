
/*

		File Opening modes in C
		
		
	C offer the programmers to select a mode for opening a file 
	
	
	Following modes are primarily used in C File I/O 
		
		"r"		--->	open for reading			----->		If the file does not exist 
		"rb"	--->	open for reading in binary	----->			fopen returns NULL
		
		"w"		--->	Open for writing			----->		If the file exist the contents
		"wb"	--->	Open for writing in binary	----->			will be overwrittes 
		
		"a"		--->	Open for append				----->		If the file does not exist
																	it will be created	
																	
																	

	Types of Files : 
	
				There are two types of files : 
					
					1)	Text files (.txt , .c)
					2)	Binary files (.jpg , .dat)
					
					
					
	Reading a file : 
	
		A file can be opend for reading as follows : 
		
			FILE *ptr;
			ptr = fopen("Saurabh.txt","r");
			int num;
			
			
*/


#include<stdio.h>

int main()
{
	FILE *ptr;
	int num;

//	ptr = fopen("Saurabh.txt","r");
	
	ptr = fopen("Saurabh1.txt","r");
	
	fscanf(ptr,"%d",&num);
	printf("The value of num is %d\n",num);	// hamane 100 ko saurabh1.txt file me dal ke rakha hai 
											//		isliye yaha vo fscanf function ki madat se
	return 0;								//		print ho raha hai....
}																							