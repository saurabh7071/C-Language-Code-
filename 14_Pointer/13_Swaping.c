#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,*p,*q,temp;
	p=&a;
	q=&b;
	
	printf("Enter two Number :");
	scanf("%d%d",&a,&b);
	
	printf("Before Swapping :%d %d\n",a,b);
	
	temp=*p;
	*p=*q;
	*q=temp;
	
	printf("After Swapping :%d %d\n",*p,*q);
	
}