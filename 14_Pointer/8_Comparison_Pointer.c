#include <stdio.h>

int main()
{
    int *ptrA,*ptrB;

    ptrA = (int *)1;
    ptrB = (int *)2;
    
    if(ptrB > ptrA)
        printf("PtrB is greater than ptrA");

return(0);
}