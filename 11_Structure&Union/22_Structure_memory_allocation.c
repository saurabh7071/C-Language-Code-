
/*

						Struct memory Allocation
						
	How structure members are stored in memory ?
	
		Always, contiguous(adjcent) memory locations are used to store structure 
		members in memory. 
		
*/


#include<stdio.h>
#include<string.h>
#pragma pack(1)

struct student
{
	int id1;
	int id2;
	char a;
	char b;
	float percentage;
};

int main()
{
	int i;
	
	struct student record = { 1,2,'a','b',86.45};
	
	printf("Size of structure in bytes : %d",sizeof(record));
	
	printf("\n\n*************************************\n");
	
	printf("\nAddress of id1 : %u",record.id1);
	printf("\nAddress of id2 : %u",record.id2);
	printf("\nAddress of a : %u",record.a);
	printf("\nAddress of b : %u",record.b);
	printf("\nAddress of %% : %u",record.percentage);
}							