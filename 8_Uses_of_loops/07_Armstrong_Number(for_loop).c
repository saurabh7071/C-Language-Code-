
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,arm,r,c;
	
	printf("The Armstrong Numbers are : ");
	
	for(i=1;i<1000;i++)
	{
		arm=0;  // Loop me hi equal to 0 dikhana hai....
		n=i;    // value assigen karna jaruri hai....
	
		while(n>0)  // or we can also use,, while(n!=0)
		{
			r=n%10;
			c=(r*r*r);
			arm=c+arm;
			n=n/10;
		}
		if(arm==i)
		{
			printf("  %d  ",i);
		}
	}
	
	return 0;
}