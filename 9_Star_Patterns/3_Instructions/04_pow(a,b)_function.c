
//	Use of Power function 

#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	printf("The value of %d to the power %d is : %.3f\n",a,b,pow(a,b));
	
	return 0;
}