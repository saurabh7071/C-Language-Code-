/*
		Decimal 					Binary 
			
			1						 1 
			2						10
			3						11
			4						100
			5						101
			6						110
			7						111
			8						1000
			9						1001
			10						1010 


		** Kisi Number ka binary kaise nikale 
		
	Ex : 	(25) = ? 
	
			2 | 25
			2 | 12   -   1  <----- ye remeainder hai 
			2 | 6    -   0
			2 | 3    -   0
			2 | 1    -   1 
			  | 0    -   1  
			  
			  Now write in reverse order 
			  
			 (25) = 11001  
		
		Binary Number : A binary number is a number that represents information or data stored
						in a computer with a combination of 0s and 1s bits. It is also known
						as the vase 2 numeral system because it has two bits, 0s and 1s.
						
		Decimal Number : A decimal number is a number that contains 10 digits from 0 to 9.
						 Its base is 10 because it collects 10 digits(0,1,2,3,4,5,6,7,8,9)
						 and represents or makes the whole number using there ten digits.	 
		
		Q5 : Decimal to binary Conversion 	 
*/

			 	
		
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int a[1000];
	int n,i;
	
//	system("cls");
	
	printf("Enter the number to convert in binary  : ");
	scanf("%d",&n);
	
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	
	printf("\n Binary of Given Number is : ");
	
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	
	
	
	printf("\n\n*************************\n");


	
// Second way to find binary of any number 

void convert(int n);

	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	convert(n);
}

void convert(int n)
{
	int arr[1000];
	int r,i;
	
	for(i=0;n!=0;i++)
	{
		r=n%2;
		arr[i]=r;
		n=n/2;
	}
	
	for(i=i-1;i>=0;i--)
	{	
		printf("%d",arr[i]);
	}	
}