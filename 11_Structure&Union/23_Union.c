
/*

							Union 
							
	Union can be defined as a user-defined data type which is a collection of 
	different variables of different data types in the same memory location. The union
	can also be defined as many members but only one member can contain a value at a 
	particular point in time. 
	
	union is a user-defined data type, but unlike structure, they share the same memory
	location.
	
	Ex : 
			struct abc
			{
				int a;
				char b;
			};
			
			
		The above code is the user-defined structure that consists of two members.
		i.e 'a' type int and 'b' of type character. When we cheak the addresses of 'a'
		and 'b', we found that their addresses are different. Therefore, we conclude
		that the members in the structure do not share the same memory location.
		
		When we define the union, then we found that union is defined in the same way 
		as the structure is defined but the differece is that union keyword is used
		for defining the union data type. Whereas the struct keyword is used for
		defining the structure. The union contains the data members, i.e 'a' and 'b' ,
		when we chek the addresses of both the variables then we found that both have 
		the same addresses. It means that the union members share the same memory location.
		
*/

#include<stdio.h>
#include<conio.h>

union abc
{
	int a;
	char b;
}var;

int main()
{
	var.a = 70;
	
	printf("\n a = %d",var.a);
	printf("\n b = %c",var.b);		// e = F 
}		


/*

	In the above code, union has two members i.e 'a' and 'b'. The 'var' is a variable
	of union abc type. In the main() method, we assign the 101 to 'a' variable. so 
	var.a will print 101 on the screen. Since both 'a' and 'b' share the memory location.
	var.b will print 'F'(ascii code of 70)
	
*/
	
	