

/*
		
		Recursive Function : 
		
			A recursive function performs the tasks by dividing it into the subtasks. There is 
		a termination condition defined in the function which is satisfied by some specific 
		subtask. After this, the recursion stops and the final result is returned from the
		function. 
		
		base case and recursive case : 
		
		The case at which the function doesn't recur is called the BASE CASE 
		whereas the instances where the function keeps calling itself to perform a subtask, 
		is called the RECURSIVE CASE. 
		
		all the recursive functions can be written using this format...
		
		
		
		pseudocode for writing any recursive function is given below : 
		
			if(test_for_base)
			{
				return some_valule;
			}
			else if(test_for_another_base)
			{
				return some_another_value;
			}
			else
			{
				// statement
					recursive call;
			}
			
*/			


//	Find the Nth term of the fibonacce series 

#include<stdio.h>
#include<conio.h>

int fibonacci(int n);

int main()
{
	int n,f;
	
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	
	f = fibonacci(n);
	
	printf("\n%d",f);
}

int fibonacci(int n)
{
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
		return fibonacci(n-1) + fibonacci(n-2);
	}
}