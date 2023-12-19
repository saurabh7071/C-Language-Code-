
/*

	Quick Quiz : 	Modify the program above to check whether the file exists or not before
					opening the file..
					
*/


#include<stdio.h>

int main()
{
	FILE *ptr;
	int num;
	
	ptr = fopen("chekfile.txt","r");
		
	if(ptr == NULL)
	{
		printf("\nThis file does not exist");
	}
	else
	{
		fscanf(ptr,"%d",&num);
		printf("\nThe value of num is : %d",num);
	}
	
	return 0;
}

/*
	kyuki
	
		is chekfile name ki koi txt file exist hi nahi karti matalb banaya hi nahi gayi 
			hai 
			isliye
			ouptut me This file does not exist show ho raha hai matlab ki if statement 
			run ho rahi hai... 
			
			or 
			
			is name ki file hoti or us fime me koi value di huii hoti to else statment run
			hoke vo value output me print ho jati ....
			
			jaise ki program_no_3 ....
			
*/				