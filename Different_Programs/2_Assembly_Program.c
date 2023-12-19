/*

	Assembly Program :-
	
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,mov,ax,ay;
	
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	asm{
		mov ax,a
		mov by,b
			
		add ax,by
			
		mov c,ax
	}
	
	printf("c= %d",c);
}	