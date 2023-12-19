
/*
				C LIBRARY FUNCTION 
				
				
	>>>	Library Functions are the inbuilt function in C that are grouped and placed at a 
		common place called the library.
	*	Such functions are used to perform some specific operations. 
		for example : printf is a library function used to print on the console.
		
	*	The librabry function are created by the designers of compilers.
		 
	>>>	All C stadard library functions are defined inside the different header files saved with the 
			extension.h
		
	*	We need to include these header files in our program to make use of the libraby function
		defined in such header files. 
		For example : To use the library functions such as  printf/scanf we need to include stdio.h 
		in our program which is a header file that contains all the library functions regarding 
		standard input/Output.
		
	* 	In C language, header files contains the set of predefined standard library functions...
	* 	The "#include" preprocessing directive is used to include the header file with "h" extension in
		the program	
		
		
		
		>>>>> List of mostly used header files : <<<<<
		
		
		stdio.h				-->		(standard input/output header file) 
									
									It contains all the library functions regarding standard input/output.
									
		conio.h				-->		(Console input/output header file)
		
		string.h			-->		(String Functions)
		
									It contains all string related library functions like gets(),puts() etc.
									
		stdlib.h			-->		(General utility functions)
									
									This header file contains all the general library functions
									like malloc() , calloc() exit() etc
									
		math.h				-->		(Mathematics Functions) 
									
									This folder file contains all the math operations related
									functions like sqrt() , pow() etc
									
		time.h				-->		(Date and time functions)
		
									This header file contains all the time-related function
		
		ctype.h				-->		(Character handling functions)
		
									This header file contains all character handling functions
		
		float.h 			-->		(Limits of float types)
		
		limit.h  			-->		(Size of basic type)
		
		wctype.h			-->		Functions to determine the type contained in wide character data.
		
		stdarg.h			-->		Variable argument functions are defined in this header file.
		
		signal.h			-->		All the signal handling functions are defined in this 
									header file.
									
		setjmp.h			-->		This file contains all the jump functions
		
		local.h				-->		This file contains locale functions
		
		errno.h				-->		This file contains error handling functions
		
		assert.h			-->		This file contains diagonstics functions
		
		dos.h 
		
		
		
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	char s1[100] = "15000";
	char s2[100] = "Saurabh";
	char s3[100] = "string_tring";
	
	int res;
	
	res = pow(2,5);
	printf("Using math.h ... the value is :%d\n",res);
	
	long int a = atol(s1);
	printf("Using stdlib.h ... the string to long int : %d\n",a);
	
	strcpy(s2,s3);
	printf("Using string.h ... the strings s2 and s3 : %s\t%s\n",s2,s3);
	
}

																																					 		