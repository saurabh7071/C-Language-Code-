#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	int value;
};

void LinkedList_Traversal(struct Node* head)
{
	printf("\nElement of LinkedList are : \n");
	while(head != NULL)
	{
		printf("%d\n",head->data);
		head = head-> next;
	}
}
struct Node *DeleteAtGivenValue(struct Node *head,int value)
{
	struct Node *p = head;
	struct Node *q = p -> next;
	while(q -> data != value && q -> next != NULL)
	{
		p = p -> next;
		q = q -> next;
	}
	if(q -> data == value)
	{	
		p -> next = q -> next;
		free(q);
	}
	return head;
}
int main()
{
 	struct Node *head = NULL;
 	struct Node *newnode;
 	struct Node *temp;
 	
 	int choice;
 	do
 	{
 		newnode = (struct Node*) malloc(sizeof(struct Node));
 		
 		printf("\nEnter the data : ");
		scanf("%d",&newnode -> data);
		
		newnode -> next = NULL;
		if(head == NULL)
		{
			head = temp = newnode;	
		}
		else
		{
			temp -> next = newnode;
			temp = newnode;
		}
		printf("Do you want to continue, if yes (enter 1) else (enter 0) : ");
		scanf("%d",&choice);
	}while(choice);
	
	printf("\nLinkedList before the deletion : ");
	LinkedList_Traversal(head);
	
	int value;
	printf("\nEnter the value for deletion : ");
	scanf("%d",&value);
	
	printf("\nLinkedList after the deletion : ");
	head= DeleteAtGivenValue(head,value);
	LinkedList_Traversal(head);
 	return 0;
}
