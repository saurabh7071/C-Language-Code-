#include<stdio.h>
#include<conio.h>

int main()
{
 int *p;  // * is used in the declaration:
          // p is a pointer to an integer, since (after dereferencing),
          // *p is an integer
 int x=0;
 // now x == 0
 printf("%d\n",x);
 p = &x;  // & takes the address of x
 // now *p == 0, since p == &x and therefore *p == x
 printf("%d\n",p);
 
 *p = 1;  // equivalent to x = 1, since p == &x
 // now *p == 1 and x == 1
printf("%d",*p);

return 0;
}