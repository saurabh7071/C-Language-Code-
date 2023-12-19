
/*
	
	Q_6 : Write a program to decrypt the string encrypted using encrypt function in problem 5.
	
*/	


#include<stdio.h>

void decrypt(char *str)
{
	char *ptr = str;
	
	while(*ptr != '\0')
	{
		*ptr = *ptr-1;
		
		ptr++;
	}
}

int main()
{
	char str[] = "J!Dbmm!Zpv!Cbdl";
	
	decrypt(str);
	
	printf("\nDecrypted string is : %s",str);
	
	return 0;
}	