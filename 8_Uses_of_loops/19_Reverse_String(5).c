
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[50],rev[50];
	int i,j=0,length;
	
	printf("Enter the string :");
	gets(str);
	
	length=strlen(str);
	
	for(i=length-1;i>=0;i--)
	{
		rev[j++]=str[i];
		//rev[j]= \0;
	}
	printf("The reverse string is :");
	puts(rev);
	getch();
}