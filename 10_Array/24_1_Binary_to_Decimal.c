
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int binary_num,decimal_num=0,rem;

	printf("Enter the binary number with the combinations of 0s and 1s : ");
	scanf("%d",&binary_num);
	
	printf("\n The binary number is %d",binary_num);
	
	for(int i=0;binary_num!=0;i++)
	{
		rem=binary_num % 10;
		decimal_num=decimal_num + (rem) * (pow(2,i));
		binary_num=binary_num/10;
	}
	
	printf("\n The decimal number is %d",decimal_num);
	return 0;
}
