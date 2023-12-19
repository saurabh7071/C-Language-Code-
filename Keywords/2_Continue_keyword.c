
/*

	Continue keyword
	
*/	

#include<stdio.h>
#include<conio.h>

int main()
{
	int n=1;
	int i=1;
	
	while(i)
	{
		printf("\n Hello");
		
		n++;
		
		continue;    // ---> is continue ki vajah se yaha infinite loop tayar ho raha 
						//	 hai.... lekin kaise ?   
						//	while loop ki condition true ho ke jab while loop chalta
		printf("\n %d",n);//	hai ,, tab printf("hello"); print ho jata hai ...
	}					//	or fir continue; keyword lagane se vo niche vale printf
						//	na jake bar bar while(i) pe jata hai or 'hello' print karata	
	return 0;			//	hai.. jis vajah se yaha pe infinite loop tayar ho raha hai
}						// or kyuki yaha pe false condition karne ke liye kuch hai hi	
						// nahi to us vajah se bhi infinite loop form ho ja raha hai..