
/*

	Strcmp() : 
				This function is used to compare two strings 
				
				It returns : 0 if string are equal 
				
				Negative value if first string mismatching character as value is not grater 
				than second string corresponding mismatching character.
				It returns positive values otherwise.
				
				
				strcmp("for" , "joke");		---->	positive value 
				strcmp("joke" , "for");		---->	Negative value 
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char s1[50] = "Saurabh";
	char s2[50] = "Saurabh";
	
	int val = strcmp(s1,s2);
	
	printf("Now the val is %d",val);		// Dono equal hai isliye value 0 aa rahi hai 
	
	
	printf("\n\n*************************************\n\n");
	
	
	char p1[50] = "Saurab";     // ascii value of '\0' is 0
	char p2[50] = "Saurabh";	// ascii value of h is 104
	
	int value = strcmp(p1,p2);	// So difference negative me aa raha hai 
	
	printf("Now the value is %d",value);		// isliye -1 print kar raha hai ...
	
	
	printf("\n\n*************************************\n\n");
	
	
	char q1[50] = "Saurabh";     // ascii value of h is 104
	char q2[50] = "Saurab";	     // ascii value of '\0' is 0
	
	int value1 = strcmp(q1,q2);	// So difference positive me aa raha hai 
	
	printf("Now the value1 is %d",value1);		// isliye 1 print kar raha hai ...
	
	
	
	printf("\n\n*************************************\n\n");
	
	
	char u1[50] = "for";
	char u2[50] = "joke";
	
	int comparison = strcmp(u1,u2);
	
	printf("Now the comparison between them is %d",u1);
	
	
		
	printf("\n\n*************************************\n\n");
	
	
	char w1[50] = "joke";
	char w2[50] = "for";
	
	int comparison1 = strcmp(w1,w2);
	
	printf("Now the comparison1 between them is %d",w1);
	
	
		
	printf("\n\n*************************************\n\n");
	
	
	
	int comparison2 = strcmp("for","joke");
	
	printf("Now the comparison2 between them is %d",comparison2);
	
	
	
	printf("\n\n*************************************\n\n");
	
	
	
	int comparison3 = strcmp("joke","for");
	
	printf("Now the comparison3 between them is %d",comparison3);
	
	
	
	printf("\n\n*************************************\n\n");
	
	
	
	char e1[100];
	
	printf("Enter your 1st string : ");
	gets(e1);
	
	char e2[100];
	
	printf("Enter your 2nd string : ");
	gets(e2);
	
	if(strcmp(e1,e2) == 0)
	{
		printf("\nStrings are equal");
	}
	else
	{
		printf("\nStrings are not equal");
	}
	
	return 0;
}				