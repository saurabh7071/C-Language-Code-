
/* 		
					Unary Operators :-
					
	Operator used to perform action on only single operand.
	
	Operators				meaning
	
	++ , -- 				Increment , Decrement 
	
	size of()
	
	~						Bitwise NOT
	
*/


// Size of () Operator :- It is used to find the size of datatype or variables. 

#include<stdio.h>
#include<conio.h>          
                       
                           
int main()                 
{                         
	int a;
	float b;
	char c;
	double d;
	
	// size of(variables)
	
	printf("%d bytes \n",sizeof(a));
	printf("%d bytes \n",sizeof(b));
	printf("%d bytes \n",sizeof(c));	
	printf("%d bytes \n",sizeof(d));
	
	printf("*****\n");
	
	// size of(datatype)
	
	printf("%d bytes \n",sizeof(int));
	printf("%d bytes \n",sizeof(float));
	printf("%d bytes \n",sizeof(char));
	printf("%d bytes \n",sizeof(double));
	
	printf("*****\n");
	
	// size of(constant)
	
	printf("%d bytes \n",sizeof(76));
	printf("%d bytes \n",sizeof(2.16));
	printf("%d bytes \n",sizeof('b'));
	
	
/*	
struct stu
{
	int a;		// sizeof(struct)=addition of int + float + char + double bytes
	float b;
	char c;
	double d;
}	
void main()
{
	struct stu s;
	
	printf("%d bytes \n",sizeof(s));
}

*/
	return 0;
}					