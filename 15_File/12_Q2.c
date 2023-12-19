
/*

	Q2 : Write a program to generate multiplication table of a given number in text format.
		 make sure that the file is readable and well formatted.
		 
*/


#include<stdio.h>

int main()
{
	int num,i;
	
	FILE *ptr;
	
	printf("\nEnter the integer you need the table of : ");
	scanf("%d",&num);
	
	ptr = fopen("table.txt","w");
	
	fprintf(ptr,"Multiplication table of %d is :\n",num);
	
	for(i=1;i<=10;i++)
	{
		fprintf(ptr,"\n%d X %d = %d",num,i,num*i);
	}
	fclose(ptr);
	
	printf("\nSuccessfully generated table of %d to table.txt file",num);
}		 