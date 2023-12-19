#include<stdio.h>
#include<string.h>

int main()
{
	int a = 134;
 	printf("%c\n\n",(char)(a));
 	
 	int row,column,size;
 	
 	//printf("Enter the size : ");
 	//scanf("%d",&size);
 	size =3;
 	for(row = 1;row <=size;row++)
 	{
 		for(column = 1;column <= size;column++)
 		{
 			/*if (size /= 2 )
 			{
 				printf(" * ");
			}*/
 			if(column % 2 == 0 && row % 2 != 0)
 			{
 				printf("%c ",(char)(row+64));
			}
			else if(column % 2 == 1 && row % 2 != 1)
			{
				printf("%c ",(char)(column+64));
			}
			else
			{
				printf("   ");
			}
		 }
		 printf("\n");
	 }
 	return 0;
}
