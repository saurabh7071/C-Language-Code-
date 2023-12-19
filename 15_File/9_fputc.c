
#include<stdio.h>

int main()
{
	FILE *ptr;
	
	ptr = fopen("putcdemo1.txt","w");
	
	putc('S',ptr);
	putc('A',ptr);
	putc('U',ptr);
	putc('R',ptr);
	putc('A',ptr);
	putc('B',ptr);
	putc('H',ptr);
	
	fclose(ptr);
	
	return 0;
}