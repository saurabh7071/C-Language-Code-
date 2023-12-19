

/*
								Recursion 
								
		A function defind in C can call itself , This is called recurrsion.
		
		OR
		
		A function calling itself is also called recurrsion function.
		
		Recurrsion is the process of repeating items in a self-similar way. In programming
		languages, if a program allows you to call a function inside the same function, then
		it is called a recursive call of the function.
		
		Ex : 	void recursion()
				{
					recursion();	-->  function calls
				}
				
				int main()
				{
					recursion();
				}
				
				
		The C programming language supports recursion, i.e A function to call itself. But
		while using recursion , programmers need to be careful to define an exit condition
		from the function, otherwise it will go into an infinite loop.
		
		Recursion involves several numbers of recursive calls. However, it is important to
		impose a termination condition of recursion. Recursion code is shorter than iterative
		code however it is difficult to understand.
		
		Recursion cannot be applied to all the problem, but it is more usefull for the tasks
		that can be defined in terms of similar subtasks. 
		For example : Recursion may be applied to sorting, searching and traversal problems.
		
		Recursion functions are very useful to solve many mathematical problems, such as 
		calculation the factorial of a number, generating Fibonacci series, etc....
		
		Generally, iterative solutions are more efficint than recursion since function call 
		is always overhead. any problem that can be solved recursively. Can also be solved
		iteratively..
		However, some problems are best suited to be solved by the recursion 
		for example : tower of Hanoi, fibonacci series, factorial finding etc.
		
		
*/



//	Recursion is used to calculate the factorial of a number...


#include<stdio.h>
#include<conio.h>

int fact(int n);

int main()
{
	int n,f;
	
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	
	f = fact(n);
	
	printf("\n\nThe factorial of %d is : %d",n,f);	
	
}	

int fact(int n)
{	
	printf("\ncalling factorial(%d)",n);
	
	int i;
	
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}	 

/*

	We can understand the above program of the recursive method :
	
		return n * fact(n-1)
		
		n = 5
		
		return 5 * fact(5-1)	= 5 * fact(4) =	120
			
				return 4 * fact(4-1)	=	4 * fact(3)	= 24
				
						return 3 * fact(3-1) 	=	3 * fact(2) = 6
						
								return 2 * fact(2-1)	=	2 * fact(1) = 2
								
										return 1 * fact(1-1)	=	1 * fact(0) = 1
										
												1 * 2 * 3 * 4 * 5 = 120 
												
												
		Another way : 
		
		
		5 *	factorial(4)
		5 *	4 * factorial(3)
		5 * 4 * 3 * factorial(2)
		5 * 4 * 3 * 2 * factorial(1)
		5 * 4 * 3 * 2 * 1 
		
		
		
*/			  		