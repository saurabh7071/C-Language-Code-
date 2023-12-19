#include<stdio.h>
#include<conio.h>

int main()
{
 	int a,b;
 	int add,substract,multiply,division;
 	int choice;
 	
 	printf("\n 1.addition");
 	printf("\n 2.substraction");
 	printf("\n 3.multiplication");
	 printf("\n 4.division");
	 
	 
	 printf("\n Enter the value of a and b::");
	 scanf("%d%d",&a,&b);
	 
	 printf("\n Enter youer choice::");
	 scanf("%d",&choice);
	 
	 
	 switch(choice)
	 
	 {
	 	case 1:
	 	add=a+b;
	 	printf("\n %d",add);
	 	break;
	 	
	 	case 2:
	 	substract=a-b;
	 	printf("\n %d",substract);
	 	break;
	 	
	 	case 3:
	 	multiply=a*b;
	 	printf("\n %d",multiply);
	 	break;
	 	
	 	case 4:
	 	division=a/b;
	 	printf("\n %d",division);
	    break;
	 	
	 	
	 }
	 
	 
	 
	 
 	return 0;
}
