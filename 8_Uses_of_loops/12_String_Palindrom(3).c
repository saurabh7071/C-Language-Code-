
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[50];
	int i,length;
	
	printf("Enter the string :");
	gets(str);
	
	length=strlen(str);
	length=length-1;
	
	i=0;
	
	while(length>i)
	{
		if(str[length] != str[i])
		{
			printf("%s is not a string Palingrom ",str);
			exit(0);
		}
		
		length--;
		i++;
		
	}
	
	printf("%s is a string palindrom ",str);
	
	return 0;
}