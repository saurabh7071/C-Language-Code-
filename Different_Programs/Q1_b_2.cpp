#include<stdio.h>

int main()
{
	int x=100,y=50;
	
	x=(x<50)? x=x+y : (y<1000)? 100:90;
	
	printf("%d",x);
	
	return 0;
}