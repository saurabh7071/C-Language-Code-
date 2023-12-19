
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,a;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	for(i=10;i>=1;i--)
	{
		printf("%d*%d =%d\n",i,a,i*a);
	}
	
	return 0;
}