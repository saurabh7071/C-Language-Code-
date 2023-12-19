#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3]={10,20,30};
	int *p[3],i;
	
	for(i=0;i<3;i++)
	{
		printf("%d\n",&a[i]);
		p[i]=&a[i];
			
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",*p[i]);
	}
	return 0;
}