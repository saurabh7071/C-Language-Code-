#include<stdio.h>
#include<conio.h>

int main()
{
	int x=5,*j;
    /*	&x=7;   ---> We cannot store anything in &x as &x is not a variable,it is the
                         way to represent address of block x ..   */
	j=&x;  /*--> J is not an ordinary variable like any other integer variable.
  	             It is a variable which contains the address of another variable.. */
	
	printf("%d\n",x);
	printf("%d\n",&x);
	
	printf("%d\n",j);
	printf("%d\n",&j);
	printf("%d\n",*j);
	return 0;
}