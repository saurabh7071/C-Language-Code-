
#include<stdio.h>
#include<conio.h>

int main()
{
	float year;
	double months, days, hours, minutes, seconds;
	int choise;
	
	printf("Enter the year :");
	scanf("%f",&year);
	
	printf("Convert the years into \n");
	printf("1. Months \n");
	printf("2. Days \n");
	printf("3. Hours \n");
	printf("4. Minutes \n");
	printf("5. Seconds \n");
	 
	 printf("Enter your choise :");
	 scanf("%d",&choise);
	 
	switch(choise)
	{
	 	case 1:
	 			months = year * 12;
	 			printf("Months in %.2f years = %.2lf",year,months);
      			break;

   		case 2:
      			days = year * 365;
      			printf("Days in %.2f years = %.2lf",year,days);
      			break;

    	case 3:
      			hours = year * 365 * 24;
      			printf("Hours in %.2f years = %.2lf",year,hours);
      			break;

    	case 4:
      			minutes = year * 365 * 24 * 60;
      			printf("Minutes in %.2f years = %.2lf",year,minutes);
      			break;

    	case 5:
      			seconds = year * 365 * 24 * 60 * 60;
     		    printf("Seconds in %.2f years = %.2lf",year,seconds);
      			break;

    	default:
      			printf("Invalid choice.");
  	}
	return 0;
}
	