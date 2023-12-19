
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
	printf("Enter the value of a and b :");
	scanf("%d %d",&a,&b);                  
	
	printf("\nBitwise AND is :%d\n",a&b);
	printf("Bitwise OR is  :%d\n",a|b);
	printf("Bitwise XOR is :%d\n",a^b);
	printf("Bitwise NOT is :%d %d\n",~a,~b);
	printf("Right Shift :%d\n",a>>2);  // a is right shifted by 2 digit 
	printf("Left Shift :%d\n",b<<2);   // b is left shifted by 2 digit 
	
	return 0;
}	  