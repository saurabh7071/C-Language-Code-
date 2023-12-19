

#include<stdio.h>

int main()
{
	int arr[5];
	
	arr[0]=5;
	arr[2]=-10;
	arr[3/2]=2;				// i.e  arr[1] which is equal to 2
	arr[3]=arr[0];			
	arr[4]='A';				// 	'A' = 65
	
	printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
	
	return 0;
}