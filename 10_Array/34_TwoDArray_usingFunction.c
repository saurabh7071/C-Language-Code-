
// 	pass two-dimensional Array 


#include <stdio.h>

void display_Numbers(int num[2][2]);

int main() 
{
  	int num[2][2];
  	printf("Enter 4 elements\n");
  	printf("Enter the elements of an array :\n");
  
  	for (int i=0;i<2;++i)
  	{
    	for (int j=0;j<2;++j)
		{
      		scanf("%d",&num[i][j]);
    	}
  	}

  // pass multi-dimensional array to a function
  
  	display_Numbers(num);

  	return 0;
}

void display_Numbers(int num[2][2]) 
{
 	 printf("\nDisplaying:\n\n");
  	for (int i = 0; i < 2; ++i)
	{
    	for (int j = 0; j < 2; ++j) 
		{
      		printf(" %d", num[i][j]);
    	}
    	
    	printf("\n");
  	}
}