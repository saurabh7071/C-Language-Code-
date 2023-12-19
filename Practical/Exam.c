#include<stdio.h>
#include<conio.h>
int queue[5];
int front=-1,rear=-1;

void insertion();
void deletion();
void display();

int main()
{
	int choice;
	
	printf("Menu of program :\n1.Insertion(Enqueue)\n2.Deletion(Dequeue)\n3.Display\n4.Exit");
	
	while(1)
	{
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
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
			default:
					printf("\nplease enter correct choice");	
		}	
	} 	
 	return 0;
}
void insertion()
{
	int element;
	printf("\nEnter the element : ");
	scanf("%d",&element);
	if((front==0 && rear==4) || (rear==front-1))
	{
		printf("\nQueue is full");
	}
	else
	{
		rear=(rear+1)%5;
		queue[rear]=element;
	}
	if(front==-1)
	{
		front=0;
	}
}
void deletion()
{
	if(front==-1)
	{
		printf("\nQueue is emtpy");
	}
	else
	{
		if(front==rear)
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
	if(front <= rear)
	{
		for(int i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
	else
	{
		for(int i=front;i<=4;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}