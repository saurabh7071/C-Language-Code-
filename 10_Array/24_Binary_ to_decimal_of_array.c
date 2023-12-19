
/*
		Q7 : Binary to decimal Conversion 


			1011 :- 		1   	0   	1   	1
							|   	|   	|   	|
						 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0  = 11 (Decimal Number)
						 
*/

						 
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num,binary_num,decimal_num=0;
	int base=1,rem;
	
	printf("Enter the binary number with the combinations of 0s and 1s : ");
	scanf("%d",&num);
	
	binary_num=num;
	
	while(num>0)
	{
		rem=num%10;
		decimal_num=decimal_num+rem*base;
		num=num/10;
		
		base=base*2;
	}
	
	printf("\n The binary number is %d",binary_num);
	printf("\n The decimal number is %d",decimal_num);

	return 0;
}
