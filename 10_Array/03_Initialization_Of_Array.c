
#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[] = {11,12,13,14,15};
	
	printf("\n The value of arr[0] : %d",arr[0]);
	printf("\n The value of arr[1] : %d",arr[1]);
	printf("\n The value of arr[2] : %d",arr[2]);
	printf("\n The value of arr[3] : %d",arr[3]);
	printf("\n The value of arr[4] : %d",arr[4]);
	
	
	printf("\n\n ************************************ \n");
	
	
	for(int i=0;i<5;i++)
	{
		printf("\n The value of arr[%d] : %d",i,arr[i]);
	}

	
	printf("\n\n <<<<<<<<<<<<<<<<<<<<<********************>>>>>>>>>>>>>>>>>>>>\n");
	
	
	
//	int byte[20]=23,34,54,56,67;   ---> it will give error
	
	int byte[10]={23,34,54,56,67};   
	
	printf("\n The value of byte[0] : %d",byte[0]);
	printf("\n The value of byte[1] : %d",byte[1]);
	printf("\n The value of byte[2] : %d",byte[2]);
	printf("\n The value of byte[3] : %d",byte[3]);
	printf("\n The value of byte[4] : %d",byte[4]);
	
	
	printf("\n\n ************************************ \n");
	
	
	for(int j=0;j<10;j++)
	{
		printf("\n The value of byte[%d] : %d",j,byte[j]);
	}
	
	
	printf("\n\n ************************************ \n");
	
			
	for(int j=0;j<5;j++)
	{
		printf("\n The value of byte[%d] : %d",j,byte[j]);
	}
	return 0;
}