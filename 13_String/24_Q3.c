
/*
	
	Q_3 : Write a function slice() to slice a string . It should change the original string such
			that it is now the sliced string. Take m and n as the start and ending position for slice.
			
*/

#include<stdio.h>

void slice(char *st , int m, int n);

int  main()
{
	char st[] = "Saurabh vaidya";
					// m = 1 ; n = 6 
	slice(st,1,6);	// 1 se leke less than 6 takke ye print karega... means 'aurab'
	
	printf("%s",st);
	
	return 0;
}

void slice(char *st , int m, int n)
{
	int i=0;
	
	while((m+i)<n)
	{
		st[i]=st[i+m];
		
		i++;
	}
	
	st[i] = '\0';
}			