
/*
	Continue Statement :-
						The continue statement is used to immideatly move to the next 
						iteration of the loop.
							The control is taken to be the next iteration thus 
						skipping everything below 'continue' inside the loop for that 
						iteration.
						
*/


#include <stdio.h>
 
int main () 
{
   int a = 10;  // local variable definition 
   
   do {
   
      if( a == 15) 
	  {
         a = a + 1;    // skip the iteration 
         continue;
      }
		
      printf("value of a: %d\n", a);
      a++;
   
   } while( a <= 20 );
   
	return 0;
}