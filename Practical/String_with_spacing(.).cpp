#include<stdio.h>
#include<string.h>
int main()
{
 	char s[100];
 	printf("Enter your string with full stop : ");
 	scanf("%[^.]",&s);
	printf("%s",s);
 	return 0;
}
