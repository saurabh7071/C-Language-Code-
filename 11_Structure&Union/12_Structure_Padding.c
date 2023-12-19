
/*

				Structure Padding in C
				
		
	Structure padding is a concept in C that adds the one or more empty bytes between the 
	memory addresses to align the data in memory.
	
	Let's first understand the structure padding in C through a simple scenario which is given
	below : 
	
		Suppose we create a user-defined structures. When we create an object of this 
		structure, then the contiguous memory will be allocated to the strucutre members.
		
		
		struct student
		{
			char a;
			char b;
			int c;
			
		}s1;
		
		
		In the above example, we have created a structure of type student. We have declared the
		object of this structure named as 's1'.After the creation of an object, a contiguous
		block of memory is allocated to its structure members. First the memory will be 
		allocated to the 'a' variable, then 'b' variable and then 'c' variable.
		
	
		
	What is the size of the struct student ?
	
		Now, we calculate the size of the struct student, we assume that the size of the int 
		is 4 bytes, and the size of the char is 1 byte.
		
		struct student
		{
			char a;   ---> 1 byte
			char b;	  ---> 1 byte
			int  c;	  ---> 4 byte
			
		}s1;
		
		In the above case, when we calculate the size of the struct student, size comes to be
		6 bytes. But this answer is wrong. Now, we will understand why this answer is wrong ?
		We need to understand the concept of structure padding.
		
	
		
	structure padding : 
					
					   The processor does not read 1 byte at a time. It read 1 word at a time.
			
				   
	What does the 1 word mean ?
								If we have a 32-bit processor, then the processor reads
								4 bytes at a time
								which means that 1 word is equal to 4 bytes.
									
								1 word = 4 bytes
									
								If we have a 64-bit	processor, then the processor 
								reads 8 bytes at a time, which means that 1 word is equal
								to 8 bytes.
									
								1 word = 8 bytes
									
			Therefore, we can say that a 32-bit processor is capable of accessing 4 bytes at
			a time, whereas a 64-bit processor is capable of accessing 8 bytes at a time.
			It depends upon the architecture that what would be the size of the word.
				
*/


#include<stdio.h>
#include<conio.h>

struct student
{
	char a;
	char b; 
	int c;
};

int main()
{
	struct student s1;
	
	printf("The size of the student structure is %d",sizeof(s1));
	
	return 0;
}
	
/*

	How to structre padding done ?
	
					|	
	|	|	| empty |	|	|	| 
					|
	  a	  b			 --- c ----
	  
	 In order to achive the structure padding, an empty row is created on the left, as shown
	 in the above digram, and the two bytes which are occupied by the 'c' variable on the 
	 left are shifted to the right so, all the four bytes of 'c' variable on the right.
	 Now, the 'c' variable can be accessed in a single cpu cycle. After structure padding,
	 the total memory occupied by the structure is 8 bytes. (1byte + 1byte + 2byte + 4byte)
	 which is greater than the previous one. Although the memory is wasted in this case, the
	 variable can be accessed within a single cycle.
	 
	 .
	 .
	 .
	 .
	 .
	 
	 	  
	In the above code, we have created a structure named 'student'. Inside the main() method,
	we declare a variable of student type, i.e s1 and then we calculate the size of the 
	student by using the size() of operator. The output would be 8 bytes due to the concept
	of strcture padding.
	
*/		