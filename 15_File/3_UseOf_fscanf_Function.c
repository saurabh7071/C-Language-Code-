

/*

			 Reading of text file....


	Let us assume that "Saurabh1.txt" contains an integer we can read that integer using ...
		
			fscanf(ptr , "%d" , &num);	--->	Fscanf is file counter part of scanf 
			
			This will read an integer from file in num variable..
			
*/			
#include<stdio.h>

int main()
{
	FILE *ptr;
	int num;
	int num1;
	
	ptr = fopen("Saurabh1.txt","r");
	
	fscanf(ptr,"%d",&num);
	fscanf(ptr,"%d",&num1);
	
	fclose(ptr);
	
	printf("The value of num is %d\n",num);	 
	printf("The value of num1 is %d\n",num1);	
		
//	fclose(ptr); 	----> here also use for close the file.....									
	return 0;								
}												