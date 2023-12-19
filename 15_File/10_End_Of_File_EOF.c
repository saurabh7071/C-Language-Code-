
/*

	EOF : End of file 
	
			fgetc returns EOF when all the characters from a file have been read 
			So we can write a check like below to detect end of file
			
			While(i)
			{
				ch = fgetc(ptr);		---->	When all the content of a file has been read 
				if(ch == EOF)					break the loop !
				{
					break;
				}
			
				// code
			
			}	
			
			
*/


#include<stdio.h>

int main()
{
	FILE *ptr;
	
	ptr = fopen("getcdemo2","r");
	
	char ch;
	
	ch = fgetc(ptr);
	
	while(ch != EOF)
	{
		printf("%c",ch);
		
		ch = fgetc(ptr);
	}
	
	return 0;
}