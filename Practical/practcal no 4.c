#include<stdio.h>
#include<conio.h>
int queue[5];
int front=-1,rear=-1;

void insertion()
{
	int element;
	printf("\nEnter the element for insertion in queue : ");
	scanf("%d",&element);
	
	if((front==0 && rear==4) || (rear==front-1))
	{
		printf("Queue is full");
	} 
	else
	{
		rear =(rear+1)%5;
		queue[rear]=element;
		if(front==-1)
		{
			front=0;
		}
	}
}
void deletion()
{
	if(front==-1) // Queue empty 
	{
		printf("Queue is Empty");
	}
	else
	{
		if(front == rear) // only one element 
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=(front+1)%5;
		}
	}
}
void display()
{
	int i;
	if(front <= rear)
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
	else
	{
		for(i=front;i<=4;i++)
		{
			printf("%d",queue[i]);
		}
		/*for(i=0;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}*/
	}
}
int main()
{ 
	int choice,element;
	
 	printf("Menu of program : \n\n1.Insertion(Enqueue)\n1.Deletion(Dequeue)\n3.Display\n4.Exit\n");
 	
 	while(1)
 	{
 		printf("\nEnter the choice for perform the operation : ");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:
		 			//printf("\nEnter the element for insertion in queue : ");
					//scanf("%d",&element);
					insertion();
					break;	
			case 2:
					deletion();
					break;
			case 3:
					display();
					break;
			case 4:
					printf("\nExit point");
					break;
			default :
					printf("\nyour choice is wrong , please enter correct choice :)");
		}
	}
 	return 0;
}
