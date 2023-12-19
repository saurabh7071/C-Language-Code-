
/*		
	else_IF :- 	The else_If statement is an extension to the If_else statement.
				It is used in the scenario where there are multiple cases to be 
					performed for different conditions.
					
				The else_If statement is useful when you need to chek multiple conditions 
				within the program, nesting of If_else blocks can be avoided using else-if
				statement.
				
	Syntax :- 	if(condition)
				{
					// statement 
				
					else_if(condition)
					{
						// statement 
					}
					else_if(condition)
					{
						// statement 
					}
					else_if(condition)
					{
						// statement 
					}
				}
				else
				{
					// statement 
				}
				
				
				
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	
	printf("Enter the Alphabet :");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("Character is Vowel of small alphabets ");
	}
	    
	    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	    {
	    	printf("Character is Vowel of capital alphabets");
		}
		
		else if(ch>='A' || ch<='Z' || ch>='a' || ch<='z')
		{
			printf("Character is Consonant");
		}
		
	else
	{
		printf("Enter the correct Character");
	}
	
   return 0;
}	

	
