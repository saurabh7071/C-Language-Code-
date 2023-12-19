
// 						Prime Number :-

#include<stdio.h>
#include<conio.h>                                                 

int main()
{
	int n,i,count=0;
	
	printf("Enter the Number :");
	scanf("%d",&n);                   //    Ex : n=3         
	                                        
	for(i=1;i<=n;i++)                 //    i=1,1<=3    i=2,2<=3    i=3,3<=3
	{                                 //        Condition is true... 
		if(n%i==0)                    //    3%1=0       3%2=1        3%3=0
		{
			count++;                  //    count=1     No count     count=2
		}     
	}                                 //          Return the for loop..
	if(count==2)                          
	printf("Prime Number");          //  Now chek the if condition and print the ans
	else 
	printf("Not prime Number");
	
	return 0;
}
