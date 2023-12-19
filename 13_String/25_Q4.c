
/*

	Q_4 : Write your own version of strcpy function from <string.h>
	
*/


#include<stdio.h>	
#include<string.h>

int main()
{
	char str[] = "India";
	
	char str1[100];
	
	printf("\nYour copied stirng is  : %s",strcpy(str1,str));
	
	return 0;
	
}	