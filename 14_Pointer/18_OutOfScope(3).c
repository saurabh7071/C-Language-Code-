//  	Variable Going out of Scope 

#include<stdio.h>
#include<conio.h>

int main()
{
	int *ptr;
	{            // --> Scope starts
	         
		int i=0;
		ptr = &i;   // ptr points to invalid location 

	}            /* --> Scope Ends  ,, Scope end ke sath initialize or declare ki gayi
										values bhi khatam ho jate hai ,, yaha pe i 
										bhi destroy ho jayega... */ 
	
	// ptr is now a dangling pointer.. 
	
	printf("%d",*ptr);
	
	return 0;
}