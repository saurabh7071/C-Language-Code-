
//   Pointer array / Address of array  


#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	int *ptr=&n;							
	
	printf("Enter the any number : ");
	scanf("%d",&n);
	
	printf("%u",*ptr);
	
	printf("\n%u",ptr);		
	ptr++;
	printf("\n%u",ptr);
	
	ptr=ptr+2;
	printf("\n%u",ptr);
	
	ptr=ptr-1;
	printf("\n%u",ptr);
	
	
	
	printf("\n\n**********************************\n");
	
	
	
	char a;
	char *b=&a;
	
	printf("Enter the any character in one letter : ");
	scanf("%s",&a);
	
	printf("%u",*b);
	
	printf("\n%u",b);		
	b++;
	printf("\n%u",b);
	
	b=b+1;
	printf("\n%u",b);
	
	b=b+2;
	printf("\n%u",b);
	
	b=b-2;
	printf("\n%u",b);
	
	
	
	
	printf("\n\n**********************************\n");
	
	
	
	
	float d;
	float *x=&d;
	
	printf("Enter any floating number : ");
	scanf("%f",&d);
	
	printf("\n%u",*x);
				// %u use karne par barabar se output nahi aata.
	printf("\n%.3f",*x);
	
	printf("\n%u",x);		
	x++;
	printf("\n%u",x);
	
	x=x+1;
	printf("\n%u",x);
	
	x=x+2;
	printf("\n%u",x);
	
	x=x-2;
	printf("\n%u",x);
	
	return 0; 
}