
/* 
	Switch Case :- 	Switch case is used when we have to make a choice between 
					number of alternatives for a given variable.
					
	
	Syntax :- 	Switch(integer expression)
				{
					Case 1 :
							code ;
							Break;
					Case 2 :					C1,C2 & C3 ---> Constants
							code ;				Code --> Any valid C code.
							Break;
					Case 3 :
							code ;
							Break;
					default :
							code;
				}
				
				
	The value of integer-expression is matched against C1,C2,C3.....
	If it matched any of these cased, that case along with all subsequent "Case" and
		"default" Statements are executed.
	
	Note : Sometimes when default is not placed at the end of switch case program,
			we should use break statement with the default case.
			
				
	Important Keywords :- 
	
	1) Break :- 
				This keyword is used to stop the execution inside a switch block.
				It helps to terminate the switch block and break out of it.
				
	2) Default :-  
				This keyword is used to specify the set of statements to execute if 
				there is no case match.
				
								
		Flowchart :- 
		
		
		Expression :  
					match
		   case 1  ------> statement 1 -----> Break ------>  Outside Switch 	
		   			match
		   case 2  ------> statement 2 -----> Break ------>  Outside Switch 
		   			match
		   default ------> statement   ------------------->	 Outside Switch
						
						
	Rules for Switch Statement :-
	
	1) Switch expression must be an 'int' or 'char'.
	2) Case value must be an integer or a character.
	3) Case must come inside Switch.
	4) break is not a must.											
										