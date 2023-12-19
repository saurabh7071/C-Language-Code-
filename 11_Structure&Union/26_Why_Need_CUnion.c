

/*

				Why do we need C Unions ?
				
	Consider one example to understand the need for C unions. Lets consider a store that
	has two itmes : 
	
	1) Books
	2) Shirts
	
	Store owners want to store the records of the above-mentioned two itms along with
	the relevant information.
	For example , Books include title , auther , no. of pages , price , and 
				shirts include color, design , size and price. The price property is
				common in both itmes. The store owner wants to store the properties,
				then how he/she will store the records.
				
		Initially, they decided to store the records in a strucute as shown below :
		
		Struct store
		{
			double price;
			char *title;
			char *author;
			int number_pages;
			int color;
			int size;
			char *design;
		};
		
		
		The above structure consistes of all the itmes that store owner wants to store.
		the above structure is completely usable but the price is common property in 
		both the itmes and the rest of the items are indiridual. The properties like
		price, *tital , auther , and number_pages belong to books while colour, size ,
		*desin belongs to Shirt.
		
		lets see how can we access the members of the structure.
	
		
#include<stdio.h>
#include<conio.h>

struct store
{
	char title[50];
	char author[50];
	int number_pages;
	int price;	
};

int main()	
{
	struct store book;
			
	book.title[50]= "C.programming";
	book.author[50] = "Paulo Cohelo";
	book.number_pages = 190;
	book.price = 205;
			
	printf("Size is : %d",sizeof(book));	Output : // 108 bytes
			
	return 0; 
}
	
	
		We can save lots of space if we use unions
*/

#include<stdio.h>

struct store
{
	int prices;
	
	union
	{
		struct
		{
			char *title;
			char *author;
			int number_pages;
			
		}book;
		
		struct
		{
			int colour;
			int size;
			char *desion;
			
		}shirt;
		
	}item;
	
};

int main()
{	
	struct store s;
	
	s.item.book.title = "C Programmin";
	s.item.book.author = "John";
	s.item.book.number_pages = 199;
	
	printf("Size is : %d",sizeof(s));
	
	return 0;
}

/*

		In the above code, we have created a variable of type store. Since we used the
	unions in the above code, so the largest memory occupied by the variable would 
	be considered for the memory allocation. The ouput of the above program is 32
	bytes. In the case of structure, we obtained 108 bytes, while in the case of unions,
	the size obtained is 32 hence the union is saving lots of memory space.

*/
