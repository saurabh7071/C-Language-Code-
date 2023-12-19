

/*

				Difference in structure and union 
				
	Structure 											Union
	
	struct Geeksforgeeks							union Geeksforgeeks
	{												{
		char x;											char x;
		float y;										float y;
	
	}obj;											}obj;
	
															allocates storage eual to 
																	largest one
										Memory sharing 					  \		
													\					   \					
	|	|_____|	|_____|	   |					|	 |__________________|   |
	|	geek1    geek2	   |					|	     geek1 & geek2		|
	|______________________|					|___________________________|		
	 obj (structure object)							 obj (union object)
	 	 
	 5 bytes memory is used 						4 bytes memory is used 
	 
	 
	 
	 another example : 
	 
	 Structure 												Union
	 
	  ___________________							 ____________________
	 |	 char      float|							|   char     float 	|
	 |	 ____	  ___	|							|	____ 	 ____	|
	 |  | a |	 | b |	|							|  | a |	| b	|	|
	 |	|___|	 |___|	|							|  |___|	|___|	|
	 |	1 bytes	 4 bytes|							|  1 byte	4 byte	|
	 |__________________|							|___________________|	
	 
	 total size : 5 bytes 							Total size : 4 bytes
	 
	 
	
	Structure												Union
	
	The keyword struct is usesd to 					The keyword of union is used to
	define a structure.								define a union.
	
	When a variable is associated with				When a variable is associated with
	a strcture the computer allocated the			a union. The computer allocates the
	memory for each member. The size ofs			memory by considering the size of
	structure is greater than or equal to			the largest memory so size of union
	the sum of sizes of its members.				is equal to the size of largest member
	
	Each members within a structure is 				Memory allocated is shared by individual
	assigned unique storage area of 				members of union.
	location 
			
	Altering the value of membre will				Altering the value of any of the member
	not affed other members of the					will alter other member value.
	structure
		
	Individual members can be accessed at			only one member can be accessed at a 
	a time											time.
	
	Several members of a structure can 				Only the first member of union can be
	intialize at onece.								initialized.
	
	
*/

	