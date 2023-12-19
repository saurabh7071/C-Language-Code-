
#include<stdio.h>
#include<conio.h>

int main()
{
	char str[50],ch;
	int i,length;
	
	printf("Enter the string :");
	gets(str);
	
	for(length=0;str[length];length++);
	for(i=0;i<length/2;i++)
	{
		ch=str[i];
		str[i]=str[length-1-i];
		str[length-1-i]=ch;
	}
	
	printf("The reverse String is :%s",str);
	
	return 0;
}