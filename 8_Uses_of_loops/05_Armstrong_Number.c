/* 
					Armstrong Numbers :- 
					
		An Armstrong Number of order n is a number in which each digit when multiplied 
		by itself n number of times and finaly added together, result the same 
			number.
			
	Ex :- 	371 is a 3 digit number therefore its order is 3.
	
			Now here, each digit is multiplied by itself 3 times and finally 
			added together and result in our original number.
			
			i.c : 3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371...
			
*/



			 // Armstrong Number series ...


#include<stdio.h>
#include<conio.h>

int main()
{                                   // How to execute the Armstrong series program ...
 int n,r,sum=0,c,s;
 
 printf("Enter the value of n :");   // n=153
 scanf("%d",&n);

 s=n;                                 // s=153

 while(n>0)                           // n=153>0  condition is true then ...
 {                                    // r=153%10=3  Remeinder is 3...
  r=n%10;                             // c=3*3*3=27
  c=r*r*r;                            // sum=0+27=27
  sum=sum+c;                          // n=153/10=15   Now
  n=n/10;
 }                                       //  n=15>0  condition is true then ....
 if(s==sum)                              //  r=5     Remeinder is 5...
  {                                      //  c=125
   printf("It is a armstrong number");   //  sum=27+125=152
  }                                      //  n=15/10=1      Now
 else
 {                                         // n=1>0  condition is true then ...
  printf("It is not a armstrong number");  // r=1%10=1  Remeinder is 1...
 }                                         // c=1*1*1=1
 getch();                                  // sum=152+1=153
 return 0;                                 // n=1/10=0    Not considered 0.1...
 }
					   //         Now

					   // n=0>0   condition is false then...

					   // Not exacute the while loop  and
					   //  terminate the loop

					   //  and then

					   // chek the if condition and print the
					   //   output...		