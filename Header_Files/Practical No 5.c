#include<stdio.h>
#include<conio.h>
int queue[5];
int element;
int front=-1,rear=-1;

int isfull();
int isEmpty();
void enqueue_rear();
void enqueue_front();
int dequeue_rear();
int dequeue_front();
void display();

int isfull()
{
	if((front==0 && rear==4) || (front==rear+1))
		return 1;
	else
		return 0;
}
int isEmpty()
{
	if(front==-1)
		return 1;
	else
		return 0;
}
void enqueue_rear(int element)
{
	if(front==-1)
	{
		front=0;
		rear=0;
		queue[rear]=element;
	}	
	else if(rear==4)
	{
		rear=0;
	}
	else
	{
		rear=rear+1;
		queue[rear]=element;
	}	
}
int dequeue_rear()
{
	element=queue[rear];
	queue[rear]=0;
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(rear==0)
	{
		rear=4;
	}
	else
	{
		rear=rear-1;
		return element;
	}	
}
void enqueue_front(int element)
{
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else if(front==0)
	{
		front=4;
		queue[front]=element;
	}
	else
	{
		front=front-1;
		queue[front]=element;	
	}
}
int dequeue_front()
{
	element=queue[front];
	queue[front]=0;
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==4)
	{
		front=0;	
	}
	else
	{
		front=front+1;
	}
}
void display()
{
	int i;
	printf("\nfront=%d and rear=%d",front,rear);
	printf("\nDouble Ended Queue : ");
	for(i=0;i<5;i++)
	{
		printf(" %d ",queue[i]);
	}
}	
int main()
{
 	int choice;
 	printf(" ** Choice of functions **");
 	printf("\n1.enqueue_rear(Insert from rear)\n2.dequeue_rear(Delete form rear)\n3.enqueue_front(Insert from front)\n4.dequeue_rear(Delete form front)\n5.Display\n6.Exit");
 	while(1)
 	{
		printf(" \nEnter your choice : ");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:
 					if(isfull())
 					{
 						printf("\nDouble Ended Queue is full");	
					}
					else
					{
 						printf("\nEnter element for insert from rear side : ");
						scanf("%d",&element);
 						enqueue_rear(element);
					}
 					break;
 			case 2:
 					if(isEmpty())
 					{
 						printf("\nDouble Ended Queue is empty ");
					}
					else
					{
						element=dequeue_rear();
						printf("\nElement is deleted from rear side : %d",element);
 					}
 					break;
 			case 3:
 					if(isfull())
 					{
 						printf("\nDouble Ended Queue is full");	
					}
					else
					{
 						printf("\nEnter element for insert from front side : ");
						scanf("%d",&element);
 						enqueue_front(element);
					}
 					break;
 			case 4:
 					if(isEmpty())
 					{
 						printf("\nDouble Ended Queue is empty ");
					}
					else
					{
						element=dequeue_front();
						printf("\nElement is deleted from front side :%d",element);
 					}
 					break;
 			case 5:
 					display();
 					break;
 			case 6:
 					printf("\nExit Point");
 					break;
 			default :
 					printf("\nYour chioce is incorrect, please enter correct choice");
		}
 	}
 	return 0;
}
