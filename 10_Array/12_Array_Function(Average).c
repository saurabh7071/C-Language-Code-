
#include<stdio.h>
#include<conio.h>

int avg(int marks1[],int size);

void main()
{
	int marks[5]={10,20,30,40,50};
	int size,average;
	
	size=sizeof(marks)/sizeof(marks[0]);
	printf("size :%d\n",size);
	
	average=avg(marks,size);
	printf("Average =%d\n",average);
	
	printf("Inside main function size of array is(in bytes)=%d\n",sizeof(marks));
}

int avg(int marks1[],int size)
{
	int i,sum=0,average=0;
	
	for(i=0;i<size;i++)
	{
		sum=sum + marks1[i];
	}
	
	average=sum/size;
	
	printf("Inside avg function size of array is(in bytes):%d\n",sizeof(marks1));
	
	return average;
}