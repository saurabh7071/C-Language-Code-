#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void LinkedList_Traversal(struct Node *head)
{
	while(head != NULL)
	{
		printf("Element : %d\n",head -> data);
		head = head -> next;
	}
}

struct Node *InsertAtEnd(struct Node *head,int data)
{
	struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	struct Node *p = head;
	ptr -> data = data;
	while(p->next != NULL)
	{
		p = p -> next;
	}
	p -> next = ptr;
	ptr -> next = NULL;
	return head;
}

int main()
{
 	struct Node *head;
 	struct Node *second;
 	struct Node *third;
 	struct Node *fourth;
 	
 	head = (struct Node*) malloc(sizeof(struct Node));
 	second = (struct Node*) malloc(sizeof(struct Node));
	third = (struct Node*) malloc(sizeof(struct Node));
	fourth = (struct Node*) malloc(sizeof(struct Node));
	
	head -> data = 34;
	head -> next = second;
	
	second -> data = 35;
	second -> next = third;
	
	third -> data = 36;
	third -> next = fourth;
	
	fourth -> data = 37;
	fourth -> next = NULL;
	
	printf("Linked List before Insertion : \n");
	LinkedList_Traversal(head);
	printf("Linked List after Insertion : \n");
	InsertAtEnd(head,78);
	LinkedList_Traversal(head);
 	return 0;
}

