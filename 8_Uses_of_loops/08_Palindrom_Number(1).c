
		       // Palindrom Numbers

/*  Palindrom Numbers : A Number or a word or a phrase if read backwards
			gives the same number or a word or a phrase as it
			is being read forward...

Example : 1221,racecar,14541 etc...     */


	#include<stdio.h>
	#include<conio.h>

	int main()
	{
	 	int n,c,r,s=0;
	 
	 	printf("Enter the value of n :");
	 	scanf("%d",&n);
						 //  n=121
	 	c=n;                                    //  c=121

	 	while(n>0)                              //  n=121>0  then condition is true ..
	 	{	                                     //  r=121%10=1  Remainder is 1 ...
	  		r=n%10;                              //  s=1+(0*10)=1
	  		s=r+(s*10);                          //  n=121/10=12
	  		n=n/10;
	 	}	                                     //  Now
	 		if(c==s)
	 		{                                    //  n=12>0   then condition is true..
	  		printf("It is Palindrome Number");   //  r=12%10=2  Remainder is 2..
	 		}                                    //  s=2+(1*10)=12
	 		else                                 //  n=12/10=1
	 		{
	  		printf("It is not Palindrome Number"); //  Now
	 		}
	 		
	 		getch();                                //  n=1>0 then condition is true..
	 		return 0;                               //  r=1%10=1   Remainder is 1..
	 }                                              //  s=1+(12*10)=121 --->s
						 //  n=1/10

						 //  now

						 /*  n=0>0  then condition is false ...

						     Now,, stop the while loop and
						     chek the if condtion and print
						     the output...  */