
/*

	Closing the file : 
	
						It is very important to close the file after read or write .
						This is acheived using fclose as follows : 
						
						fclose(ptr);
						
						This will tell the compiler that we are done working with this file 
						and the assiciated resources could be freed.
						
						
						
	Writing to a file : 
	
						We can write to a file in a very similar manner like we read the file.
						
						FILE *ptr;
						ptr = fopen("chekfile1.txt","w");
						int num = 2003;
						fprintf(ptr,"The number is : %d",num);
						fclose(ptr);
						
*/



#include<stdio.h>

int main()
{
	FILE *ptr;
	int num = 2003;	
	
	ptr = fopen("chekfile1.txt","w");
	
	fprintf(ptr,"The number is : %d\n",num);// fprintf function ki madat se hum file me values print
	fprintf(ptr,"Thanks for using fprintf",num);		// kara sakte hai...
	
	fclose(ptr);
	return 0;
}						