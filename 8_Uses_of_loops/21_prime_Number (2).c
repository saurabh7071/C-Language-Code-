
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n;
	
	printf("Enter the Number :");
	scanf("%d",&n);                          // Ex : n=5               n=3
	
	i=2;                                     //  i=2                   i=2
	while(i<=n-1)                            //  2<=5-1=4              2<=3-1=2
	{
		if(n%i==0)                           //  5%2==1  	           3%2==1
   		{                                    // Therefore              Therfore
			printf("Not a prime Number");    //        
			break;                           //  
		} 
		i=i+1;                               //  i=4+1=5               i=2+1=3
	} 
	if(i==n)                                 //  if(5=5)               if(3=3)
	{
		printf("It is Prime Number");       // Condition is true  condition is true 
		getch();
	}
}