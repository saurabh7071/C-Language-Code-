
/*

	Q_1 : Write a program to take string as an input from the user using %c and %s. Confirm that 
			the strings are equal.
			
*/


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s1[100];
	char s2[100];
	char ch;
	int i;
	
	printf("\nEnter the string s1 : ");
	scanf("%s",s1);
	
	printf("\nEnter the value of second string character by character : ");
	
	while(ch != '\n')
	{
		fflush(stdin);			// Dono scanf ke beech ki link todne ke liye ye use kiya hai....
								// kuyki pahle scanf ki vajah se dusere scanf me problem aa rahi hai...
		scanf("%c",&ch);
		
		s2[i] = ch;
		
		i++;	
	}	
	
//	s2[i] = '\0';		// iski vajah se end me dusri vali string me 1 '\n' aa jata hai jis vajah se 
						// 1 bar enter jyada dabana padta hai...
						// ise avoid karne ke liye niche vala logic thik rahega...
	s2[i-1] = '\0';
						
	printf("\nThe s1 string is  : %s",s1);
	printf("\nThe s2 string is  : %s",s2);
	
	int cmp = strcmp(s1,s2);
	
	printf("\n\nstrcmp for these strings returns %d",cmp);
	
	return 0;
}			