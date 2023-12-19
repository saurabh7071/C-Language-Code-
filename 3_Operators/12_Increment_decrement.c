

#include<stdio.h>
#include<conio.h>

int main()
{
	int x=-1,y=-1,z=-1,w,r;
	

	w=++x && ++y && ++z ;
	r=--x && --y && --z ;
	
	
	printf("\n %d\t%d\t%d\t%d",x,y,z,w);
	printf("\n %d\t%d\t%d\t%d",x,y,z,r);
	
	
	
	
	printf("\n\n**************");
	
	
	
	
	int a=11,i;			// initially , a=11
						// 			   i=11(i=12) + 13(i=13)	
	i=a++ + ++a;		//				i= 11 + 13
						//				i=24
	printf("\ni=%d",i);	      
	
	
	
	
	printf("\n\n**************");
		
	
	
	
	int t=0,q;
	
	q=t++ - --t + ++t - t--;	// q= 0(t=0) - 0(t=0) + 1(t=1) - 1(t=0)
								// q = 0 - 0 + 1 - 1
	printf("\nq=%d",q);			// q= 0 
	 	
	 	
	
	
	
	printf("\n\n**************");
	
	
	
	
	
	int h=1,s=0,u=5;
	
	int g=h && s || u++;
	
	printf("\nu=%d",u); 	// u = 6
	printf("\ng=%d",g); 
	
	printf("\n");
	
	int k=h && s && u++;
	
	printf("\nu=%d",u); 	// u = 6
	printf("\nk=%d",k); 
	
		
	return 0;
}