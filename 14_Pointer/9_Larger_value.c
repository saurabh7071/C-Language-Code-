#include <stdio.h>

int* larger(int*, int*);

void main()
{
    int a;
    
    printf("\nEnter any number : ");
    scanf("%d",&a);
    
    int b;
    
    printf("\nEnter another any number : ");
    scanf("%d",&b);
    
    int *p;
    
    p = larger(&a, &b);
    
    printf("\n%d is larger",*p);
}

int* larger(int *x, int *y)
{
    if(*x > *y)
    {
        return x;
	}
    else
    {
        return y;
	}
}