#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	struct Node *previous;
};
void Creating_Node()
{
	struct Node *head, *newnode, *temp;
	int choice;
	do
	{
		newnode = (struct Node*) malloc(sizeof(struct Node));
	
		printf("Enter the elemnet : ");
		scanf("%d",&newnode -> data);
	
		head =0;
		newnode -> next = 0;
		newnode -> previous = 0;
	
		if(head == 0)
		{
			head = temp = newnode;	
		}
		else
		{
			temp -> next = newnode;
			newnode -> previous = temp;
			temp = newnode;
		}
	
		printf("\nDo you want to continue the loop [yes - enter 1 , no - enter 0] : ");
		scanf("%d",&choice);
	}while(choice);		
}
void display()
{
	struct Node *temp;
	struct Node *head;
	
	temp = head;
	
	printf("Our doubly LinkedList are : \n");
	while(temp != NULL)
	{
		printf("%d",temp -> data);
		temp = temp -> next;
	}
}
int main()
{
	Creating_Node();
	display();
	return 0;
}