
#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y;
	x=45>34 ? 1,2,3 : 4,5,6 ;
//  Con/Exp 1  Exp 2    Exp 3      If condition is true then the Expression 2 is print 
	y=45<34 ? 1,2,3 : 4,5,6 ;  //  If condition is false then the Exp 3 is print.     
	                           //  Alwayes print the nearest value from the colon(:).
	printf("%d\n",x);          //   Ex : 3 and 4 
	printf("%d\n",y);
	
	
	printf("\n\n**********************************");
	
	
	
	// Program to cheak number is even or odd using conditional operator 
	
	int num;
	
	printf("\nEnter the any number : ");
	scanf("%d",&num);
	
	(num % 2==0)? printf("\n%d is even number",num) : printf("\n%d is odd number",num);
	
	
	printf("\n\n**********************************");
	
	
	// Program to check alphabet or not alphabet using conditional operator 
	
	char ch;
	
	printf("\n\nEnter any character : ");
	scanf(" %c",&ch);
	
	(ch >= 'A' && ch <= 'Z' || ch >='a' && ch <= 'z')? printf("\n%c is Alphabate",ch): printf("\n%c is not Alphabate",ch);
	
	
	printf("\n\n**********************************");
	
	
	// Program to check alphabet or not alphabet using ASCII value and contitional operator
	
	// ASCII -----> American Standard Code of Information Interchange..
	
	char alphabet;
	
	printf("\n\nEnter any Alphabet : ");
	scanf(" %c",&alphabet);
	
	(alphabet >= 97 && alphabet <= 122 || alphabet >=65 && alphabet <= 90)? printf("\n%c is Alphabet",alphabet):printf("\n%c is Not Alphabet",alphabet);
	
	
	printf("\n\n**********************************");
	
	
	// Program to check alphabet,digit or special symbol using conditional operator
	
	char solo;
	
	printf("\nEnter any character : ");
	scanf(" %c",&solo);
	
	(solo >= 'A' && solo <= 'Z' || solo >= 'a' && solo <= 'z')?printf("\n%c is Alphabet",solo): (solo >= '0' && solo <= '9')?printf("\n%c is digit",solo):printf("\n%c is special Character",solo);
	
	return 0;	 
}