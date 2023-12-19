#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	int child;
	// make two process which run same
	// program after this instruction
	child=fork();

	printf(child);
	clrscr();
	return 0;
}
