
#include<stdio.h>
#include<conio.h>

int main()
{
	int a=1,b;							//	   increment   further increment   ------> a = 3
										//	    a--> 2    3
	b=a++ + a++;						//		b= a++ + a++
										//		b--> 1 +  2	
	printf("\na=%d",a);					//		  assigned  further assigned	------> b = 3 
	printf("\nb=%d",b);
	
	
	
	printf("\n");
	
	
	
	int x=1,y;                          //         assigned the incremented value in last in b   -------------> 6 
										//		y--> 3 + 3 
	y=++x + ++x;						// 		y= ++x + ++x	
										//		x--> 2 , 3
	printf("\nx=%d",x);                 //      increment  further increment ----------> 3
	printf("\ny=%d",y);
										// In post increment ----> pahale value increment hogi or last me value assigned hogi...

	printf("\n");
	
						  //				First increment  
	int p=1,q;			  //						|
					      // incremented value -->  2  ,   3 ---> 3 
	q=++p + p++;						// 		q= ++p + p++
						    // Assigned values -->	3  +  2 ---> 5
	printf("\np=%d",p);		//							  |
	printf("\nq=%d",q);		//						   First assigned 



	printf("\n");
	

	int e=1,f;
					        // incre value -->  2     3      4   ------>   4 
	f=++e + e++ + ++e;			           // (++e + e++) + ++e  compiler calculate the value by using this type of expansion 	
	 						// assig value -->  3  +   2   +   4 ------>   9 
	printf("\ne =%d",e);
	printf("\nf =%d",f);
	
	return 0;
}