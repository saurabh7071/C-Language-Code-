#include<stdio.h>
#include<conio.h>

int main()
{
	int a=10,b=10,sum=0,sub;
	int *p1,*p2;
	
	p1=&a;
	p2=&b;
	
	sum = *p1 + *p2;	
	printf("%d\n",sum);	
	
	sub = p2 - p1;
	printf("%d\n",sub);
	return 0;
}



