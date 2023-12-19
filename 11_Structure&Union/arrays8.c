#include<stdio.h>
#include<conio.h>

int main()
{   
 	int a[10]={1,2,3,5,6,7,8,9,5,6};
 	int i,sum=0;
 	
 	for(i=0;i<=9;i++)
 	{
 		sum=sum+a[i];
	 }
	 
	 printf("\n sum of arrays elements is=%d ",sum);
 	
 	return 0;
}
