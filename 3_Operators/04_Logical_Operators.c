/* 	
						Logical Operators :- 
						
	Operators 			    Description 
	&& (Logical and)		True only if all operators are true. 
	|| (Logical OR )	    True only if either one operand is ture.
	!  (Logical Not)		True only if the operand is false ie.(0)
	
	
	0 --> zero means false
	1 --> one means true
	
	
	P		q		&&		|| 
	0		0		0		0
	0		1		0		1
	1       0		0		1
	1		1		1		1
	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
	printf("Enter the value of a and b :");
	scanf("%d %d",&a,&b);
	
	printf("a&&b :%d\n",a&&b);
	printf("a||b :%d\n",a||b);
	printf("!a and !b :%d %d\n",!a,!b);
	
	return 0;
}
  			