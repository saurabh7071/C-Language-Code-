
#include<stdio.h>
#include<conio.h>

int main()
{
 	int num1 , num2 , choice ;
 	int addition,substraction,multiplication,division ;

	printf(" Enter the value of num1 and num2 =");
 	scanf ("%d%d",&num1,&num2);

 	printf(" 1.Addition\n");
 	printf(" 2.Substraction\n");
 	printf(" 3.Multiplication\n");
 	printf(" 4.Division\n");

 	printf(" Enter your choice\n");
 	scanf("%d",&choice);

 	if(choice==1)
 	{
   		addition = num1+num2;
   		printf("\n Addition = %d",addition);
 	}
  	else if(choice==2)
  	{
   		substraction = num1-num2;
   		printf("\n Substraction = %d",substraction);
  	}
  	else if(choice==3)
  	{
  		multiplication = num1*num2;
   		printf("\n Multiplication= %d",multiplication);
  	}
  	else if(choice==4)
  	{
  		division = num1/num2;
   		printf("\n Division= %d",division);
  	}
   else
   {
    printf(" Enter the correct choice");
   }
   
    getch();
    return 0;
   }

