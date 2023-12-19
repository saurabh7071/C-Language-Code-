
/*
	Q_9 :- Program to cheak a number is palindrome number or not.
	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,copy,a,rev=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	copy=n;
	
	while(n>0)
	{
		a=n%10;
		rev=(rev*10)+a;
		n=n/10;
	}
	
	if(rev==copy)
	{
		printf("\n It is Palindrome Number");
	}
	else
	{
		printf("\n It is Not a Palindrome Number");
	}
	
	return 0;
}	 