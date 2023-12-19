    
    
// arr[i] == *(arr+i)
// If arr is a pointer to arr[0] then arr+i is a pointer to arr[i].

#include<stdio.h>
#include<conio.h>

int main()
{
int arr[]={1,3,2,4,5,6};
int *arrayptr=arr;

printf("Value of position 3 of the array is %d\n",arr[3]);
printf("The address of first element of the array is %d\n",&arr[0]);
printf("The address of the array is %d\n",arr);
printf("The address of second element of the array is %d\n",&arr[1]);
printf("The address of second element of the array is %d\n",arr+1);
// ptr++; ---> Error
arrayptr++;
arrayptr--;

printf("The value at address of first element of the array is %d\n",*(&arr[0]));
printf("The value at address of first element of the array is %d\n",arr[0]);
printf("The value at address of the array is %d\n",*arr);
printf("The value at address of second element of the array is %d\n",*(&arr[1]));
printf("The value at address of second element of the array is %d\n",arr[1]);
printf("The value at address of second element of the array is %d\n",*(arr+1));


return 0;
}