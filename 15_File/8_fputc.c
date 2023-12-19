
#include<stdio.h>

int main()
{
	FILE *ptr;
	
	ptr = fopen("putcdemo.txt","w");
	
	putc('S',ptr);
	
	fclose(ptr);
	
	return 0;
}