/* Call by value :  Sending the values of argrments 
                   Here the value of the arguments are passed to the function .
				   
				   If sum is defined as sum(int a,int b) the values a=4 and b=5 
				    are copied to a and b. Now even if we change a and b nothing 
					happens to the variables x and y .
					
					int c=sum(4,5);  ---> assume x=4 and y=5  */

#include<stdio.h>
#include<conio.h>

int sum(int a,int b);
int main()
{
	int a,b;
	
	printf("Enter the two Numbers :");
	scanf("%d%d",&a,&b);
	
	printf("The value of a and b is %d and %d\n",a,b);
	printf("The value of a+b is %d\n",sum(a,b));
	printf("The value of a and b after function call is %d and %d\n",a,b);
	
	return 0;
}

int sum(int a,int b)
{
	int c;
	c=a+b;
	b=343,a=235; /* is a and b ki value se koi fark nahi padne vala kyuki a and b ki  
	                values copy hoke pass hoti hai jis vajah se in a and b ki values  
				    output me print nahi ho sakti  */
	return c;
}