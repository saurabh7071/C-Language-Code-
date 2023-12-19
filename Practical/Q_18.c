
/*

	Q_18 :- program to find length of string.(With and without using library Function)
	
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[100];
	int length,i;
	
	printf("Enter your String : ");
	scanf("%s",&str);
	
	length=strlen(str);
	
	printf("\n The length of String by using library fuction is %ld",length);
	
	
	printf("\n \n******************************\n");
	
	
	for(i=0;str[i]!='\0';i++)
	{
		
	}
	printf("\n Length of String without using library function is %d",i);
	
	return 0;
	
}	