
#include<stdio.h>
#include<conio.h>

int main()
{
	int rating ;
	
	printf("Enter you rating :");
	scanf("%d",&rating);
	
	switch(rating)
	{
		case 1:
				printf("Your rating is One Star \n");
				break;
		case 2:
				printf("Your rating is Two Star \n");
				break;
		case 3:
				printf("Your rating is Three Star \n");
				break;
		case 4: 
				printf("Your rating is Four Star \n");
				break;
		case 5:
				printf("Your rating is five Star \n");
				break;
		default:
				printf("Plese Enter the correct rating");										
	}
}