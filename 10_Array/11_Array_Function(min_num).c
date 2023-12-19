

/*

						Passing Array to Function 

	In C , there are various general problems which requires passing more than one variable 
		   of the same type to a function.
	
	For example :	Consider a function which sorts the 10 elements in ascending order. Such
					a function requires 10 numbers to be passed as the actual parameters from
					the main function. Here, instead of declaring 10 different numbers and 
					then passing into the function, we can declare and initialize an array and
					pass that into the function. This will resolve all the complexity since
					the the function will now work for any number of values.	   
 
 */
 
 
 
 #include<stdio.h>
 #include<conio.h>
 
 int min_array(int num[],int byte);
 
 int main()
 {
 	int numbers[] = {4,5,7,3,8,9};
 	int i=0,minimum=0,size;
 	
 	size= sizeof(numbers)/sizeof(numbers[0]);
 	printf("size :%d\n",size);
 	
	minimum=min_array(numbers,size);			// Passing array with size 
	
	printf("Minimum number is :%d\n",minimum);
	
	printf("Inside main function size of array is : %d\n",sizeof(numbers));
	
	return 0;
 }
 
 int min_array(int arr[],int byte)
 {
 	int min=arr[0];
 	int i=0;
 	
 	for(i=1;i<byte;i++)
 	{
 		if(min>arr[i])
 		{
 			min=arr[i];
		}
	}
	
	printf("Inside min_array function size of array is : %d\n",sizeof(min_array));
	return min;
 	
 }
 
 	
 
