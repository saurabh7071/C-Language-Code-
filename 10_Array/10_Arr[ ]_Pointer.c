

#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[]={10,20,30,40,50,60,70,80,90,100};
	
	printf("Value of position of 3 of the array is : %d\n",arr[3]);
	
	printf("\n*********************************************\n");
	
	printf("The address of first element of the array is : %d\n",&arr[0]);
	printf("The address of first element of the array is : %d\n",arr);
	
	printf("\n");
	
	printf("The address of second element of the array is : %d\n",&arr[1]);
	printf("The address of second element of the array is : %d\n",arr+1);
	
	printf("\n*******************************************\n");
	
	printf("The value at address of first element of the array is : %d\n",*(&arr[0]));
	printf("The value at address of first element of the array is : %d\n",arr[0]);
	printf("The value at address of first element of the array is : %d\n",*(arr));
	
	printf("\n");
	
	printf("The value at address of second element of the array is : %d\n",*(&arr[1]));
	printf("The value at address of second element of the array is : %d\n",arr[1]);
	printf("The value at address of second element of the array is : %d\n",*(arr+1));
	
	return 0;
}