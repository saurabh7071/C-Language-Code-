#include<stdio.h>
#include<conio.h>

int main()
{
	int a[]={11,22,33,44,55};
	int sum=0,*p;
	
	for(p=&a[0] ; p <= &a[4] ; p++)
	{
		sum += *p;
	}
	
	printf("Sum is %d",sum);
	
	return 0;
}