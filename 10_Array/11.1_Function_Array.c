
//  	Passing array to function 


#include<stdio.h>
#include<conio.h>

void array(int num[], int n);

int main()
{
	int arr[]={90,87,56,23,10,1,5,0};
	
	array(arr,8);
	
	return 0;
}

void array(int num[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
}