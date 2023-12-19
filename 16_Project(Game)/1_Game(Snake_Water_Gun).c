
/*
						Snake , Water , Gun
						
			Snake water gun or Rock Paper Scissors is a game most of us have played during school
		time.
		
		Write a C program capable of playing this game with you.
		
		Your program should be able to print the result after you choose snake/water or gun...
		
*/
		

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snake_Water_Gun(char you , char comp)
{
	/*	
			returns (1)  if you win ....
		 	returns (-1) if you lose ....
		 	returns (0)  if draw ....
		 	
		 	Condition of draw : 
		 							Cases covered : 
		 											snake 	- 	snake
		 											gun 	- 	gun
		 											water 	-	water 
		 											
	*/
	
	if(you == comp)
	{
		return 0;
	}
	
	/*
			Non-draw Condition : 
									Cases covered : 
													snake 	- 	gun
													gun 	- 	snake
													snake 	- 	water
													water 	- 	snake
													gun 	- 	water
													water 	- 	gun
													
	*/
	
	if(you == 's' && comp == 'g')
	{
		return -1;	
	}				
	else if(you == 'g' && comp == 's')
	{
		return 1;
	}
	
	
	if(you == 's' && comp == 'w')
	{
		return 1;
	}
	else if(you == 'w' && comp == 's')
	{
		return -1;
	}			
	
	
	if(you == 'g' && comp == 'w')
	{
		return -1;
	}
	else if(you ==  'w' && comp == 'g')
	{
		return 1;
	}
						 											
}

int main()
{
	char you,comp;
	
	srand(time(0));
	int number = rand()%100 + 1;	// These is used for auto generate the numbers form 1 to 100
	
	if(number < 33)
	{
		comp = 's';
	}
	else if(number > 33 && number < 66)
	{
		comp = 'w';
	}
	else
	{
		comp = 'g';
	}
	
	printf("Enter : \n 's' for snake \n 'w' for water \n 'g' for gun \n : ");
	scanf("%c",&you);
	
	int result = snake_Water_Gun(you,comp);
	
	if(result == 0)
	{
		printf("\nGame Draw!!!");
	} 
	if(result == 1)
	{
		printf("\nYou Win!!!");
	} 
	if(result == -1)
	{
		printf("\nYou Lose!!!");
	} 
	 
	 return 0;
}