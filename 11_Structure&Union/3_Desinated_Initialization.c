
// Designated initialization 
	
// Designated Initialization allows structure members to be initialized in any order.

#include<stdio.h>	
struct point 
{	
	int x,y,z;
};
		
int main()	
{
	// Examples of initialization usign designated initialization 
			
	struct point p1 = {.y = 0 , .z = 1 , .x = 2};
	struct point p2 = {.x = 20};
			
	printf(" x = %d , y = %d , z = %d", p1.x , p1.y , p1.z);
	printf("\n x = %d", p2.x);
								
	return 0;
}