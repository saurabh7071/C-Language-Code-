
/*

			  * 
	  		* * *
		  * * * * *
  		* * * * * * *
	  * * * * * * * * *
	* * * * * * * * * * *
	  * * * * * * * * * 
	    * * * * * * *
		  * * * * *
		    * * *
			  *
			  
*/


#include<stdio.h>
#include<conio.h>

int  main()
{
	int n,m_spaces,p_stars,i,j,k;
	
	printf("Enter the value of 'n' in odd number for better result :");
	scanf("%d",&n);
	
	m_spaces=n-1;
	p_stars=1;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m_spaces;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=p_stars;k++)
		{
			printf("*");
		}
		
		if(m_spaces>i)
		{
			m_spaces=m_spaces-1;
			p_stars=p_stars+2;
		}
		if(m_spaces<i)
		{
			m_spaces=m_spaces+1;
			p_stars=p_stars-2;
		}
		
		printf("\n");
	}
	
	return 0;
}			        