#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
 	fork();
 	printf("This is the output\n");
 	return 0;
}
