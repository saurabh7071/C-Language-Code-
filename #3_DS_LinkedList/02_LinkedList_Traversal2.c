#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};
int main()
{
 	struct Node *head;
	struct Node *newnode;
	struct Node *temp;
	// struct Node *head , newnode , temp;
	head =0;
	int choice;
	do
	{
		newnode = (struct Node*)malloc(sizeof(struct Node));
		
		printf("Enter data : ");
		scanf("%d",&newnode->data);
		
		newnode -> next = 0;
		
		if(head == 0)
		{
			head = temp = newnode;	
		}	
		else
		{
			temp -> next = newnode;
			temp = newnode;
		}
		printf("Do you want to continue ,if yes (enter 1) else (enter 0) : ");
		scanf("%d",&choice);
	}while(choice);
		
	temp = head;
	printf("\nElement of LinkedList are : ");
	while(temp != 0)
	{
		printf("%d\n",temp->data);
		temp = temp -> next;
		//count++;
	}
 	return 0;
}
