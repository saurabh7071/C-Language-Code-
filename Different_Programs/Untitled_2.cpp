#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	
	x = (printf("AA") || printf("BB"));
	printf("%d",x);
	
	printf("\n");
	
	x = (printf("AA") && printf("BB"));
	printf("%d",x);
	return 0;
}