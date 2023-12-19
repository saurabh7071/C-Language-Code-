
// What will be the output of following program ? 

#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	
	x = (printf("AA") || printf("BB"));
	printf("%d",x);
	
	printf("\n");
	
	x = (printf("AA") && printf("BB"));
	printf("%d",x);


/*

	1) printf() returns total number of characters, printf("AA") will return 2 hence expression is true 
		second expression printf("BB") will not execute.
	
	2) In this statement both expression will execute..
	
*/
	

	
	
// Whar will be the output of following program ? 

	
	char val = 250;
	int ans;
	
	ans = val + !val + ~val + ++val;
	
	printf("\n\n%d",ans);
	
	
/*
	250 is beyond the range of char, the value of val will be -6.
	
	Consider the expression : 
	
	ans = val + !val + ~val + ++val;
	
	Operator ! , ~ and ++ have equal precedence. and it associative is right to left.
	So, First ++ operator will perform the operation. So Value will -5
	Now...
	ans = -5 + !-5 + ~-5 + -5
		= -5 + !-5 + 4 - 5
		=  -6
		
*/
	

/*

	 what will be the output of follwing program ? 

	printf("Value is %d",10++);			
	
	Output : ERROR
	
	++/-- operator works on variables only....
	
*/


/*


//	What will be the output of following program ? 


float x;
(int)x = 10;

printf("value of a=%d",x);

Output : ERROR : L-value required as left operand of assignment 

				(int)a will return an integer constant value and 10 is also integer value, and constant value can not 
				assigne in constant value...

*/
	
	
//  What will be the output of following program ? 

	int p; 
	p = 100,30,50;
	printf("\n\nx = %d",p);
	
	p = (100,30,50);
	printf("\nx = %d",p);

/*
	Since = (assignment operator) has more precedence than comma operator (,) so = operator evaluates first and 100 will 
	be assigned to x....
	
	In second case , x = (100,30,50) here
											() have more precedence so (100,30,50) will be evaluate first from left to right
											 and p will be 50....
	
*/
	
	
	printf("\n*******************************************");
	
		
// What will be the output of following program ? 
	
	int i,j,k,l,m;
	 i = -1; j=-1; k=0; l=2, m;
	
	m = i++ && j++ && k++ || l++;
	
	printf("\n\n%d %d %d %d %d",i,j,k,l,m);
	
/*
	++ Operator has precedence over && , || operators. thus it is evaluated first. So the expression turns to be 
	m = 0 && 0 && 1 || 3 
		i=0 , j=0 , k=1 , l=3
	Now, 
		 && has precedence over || and both has associativity left to right. Hence the expression part 0 && 0 is evaluate
		 m = ((0 && 0) && 1 || 3)
		   =  ((0 && 1) || 3)	
		   =  0 || 3
		   = 1
		   Thus value of 
		   m = 1
		   i = 0
		   j = 0
		   k = 1
		   l = 3 
		   
*/
		   
	return 0;
}







	