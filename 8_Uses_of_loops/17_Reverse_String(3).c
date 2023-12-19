
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char ch[50];
	int i;
	
	printf("Enter the string :");
	scanf("%s",&ch);
	
	for(i=strlen(ch)-1;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	 return 0;
}