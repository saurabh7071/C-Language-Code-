
/*

	strtok() :
				Finds second string in first string and returns a pointer to it 
				and
	   			returns NULL if not found
	   			
*/


#include<stdio.h>
#include<string.h>

int main()
{
	char s1[] = "Hey,123,Saurabh";
	
	char *p;
	
	p = strtok(s1,"");
	
	while(p != NULL)
	{
		printf("\n%s",p);
		
		p = strtok(NULL,",");
	}
	
	
	printf("\n\n*****************************************\n");
	
	
	char s2[] = "Hey,123,saurabh Vaidya";
	
	char *ptr;
	
	ptr = strtok(s2,",");
	
	while(ptr != NULL)
	{
		printf("\n%s",ptr);
		
		ptr = strtok(NULL,",");
	}
	
	return 0;
}   			