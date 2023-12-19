#include<stdio.h>

int main()
{

	int a=10,b=20,c;
	
	printf("\nValue of a and b before swaping : a=%d,b=%d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nValue of a and b after swaping : a=%d,b=%d",a,b);
	
 	return 0;
}
