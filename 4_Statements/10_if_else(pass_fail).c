

#include<stdio.h>
#include<conio.h>

int main()
{
	int physics,chemistry,math;
	float total;

	printf(" Enter the mark of physics:");
	scanf("%d",&physics);

	printf(" Enter the mark of chemisry:");
	scanf("%d",&chemistry);

	printf(" Enter the mark of math:");
	scanf("%d",&math);

	total=(physics+chemistry+math)/3;

	if((total<40) || physics<35 || chemistry<35 || math<35)
	{
		printf(" your total percentage is %f and you are fail \n",total);
	}
	else
	{
		printf(" your total percentage is %f and you are pass \n",total);
	}
	
getch();
return 0;
}