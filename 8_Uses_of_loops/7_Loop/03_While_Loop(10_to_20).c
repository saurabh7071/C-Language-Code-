
/* 		
	Que :- Write a programm to print natural numbers from 10 to 20 when initial loop
			 counter is initialized to 0.
			 
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int i=0;
	
	while(i<=20)
	{
		if(i>=10)
		{
			printf("%d\n",i);
		}
			i++;  // -->ye isi jagah pe likha hona chahiye.. nahi to value print nahi hogi
	}
}			 