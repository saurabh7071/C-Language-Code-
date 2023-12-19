
// Changing order of the variable 


#include<stdio.h>
#include<conio.h>

struct student
{
	char a;
	int b;
	char c; 
};

int main()
{
	struct student s1;
	
	printf("The size of the student structure is %d",sizeof(s1));
	
	return 0;
}


/*
		The above code is similar to the previous code , the only thing we change is the order
		of the variables inside the structure student. Due to the change in the order, the 
		output would be different in both the cases. In the previouos case, the output was 8
		bytes, but in this case, the ouput is 12 bytes.
		
		Now , we need to understand why the output is differen in this case : 
			
			Firstly, memory is allocated to the char a variables, i.e 1 byte
				
									|
					|	|	|	|	|	|	|	|	|
					  a				|
					  
			Now, the memory will be allocated to the int b since the int variable occupies 4
			bytes, but on the left, only 3 bytes are available. The empty row will be created
			on these 3 bytes, and the int variable would occupy the other 4 bytes so that the
			integer variable can be accessed in a single CPU cycle.
			
									|
					|	|   empty	|	|	|	|	|
					  a				| ------ b ------
					  
					  
			Now the memory will be given to the char c At a time, CPU can access 1 Word ,which
			is equal to 4 bytes, so CPU will use 4 bytes to access a 'c' variable. Therefore
			the total memory required is 12 bytes (4 bytes + 4bytes + 4 bytes) i.e 4 bytes
			required to access char a variable, 4 bytes requied to access int b variable, and
			other 4 bytes required to access a single character of 'c' variable.
			
								|				|
				|	|	empty	|	|	|	|	|	|	|	|	|
				  a				| ----- b -----	| ------ c ------  
				  
*/
				  