
#include<stdio.h>
#include<conio.h>

int main()
{
	int i=1,sum=1,n;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	do
	{
		sum += i;
		
		printf("%d\n",sum);
		
		i++;
		
	}while(i<n);
	
	return 0;
}