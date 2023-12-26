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

struct Node *InsertAtIndex(struct Node *head,int data,int index)
{
	struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	struct Node *p = head;
	int i=0;
	while(i!=index-1)
	{
		p = p -> next;
		i++;
	}
	ptr -> data = data;
	ptr -> next = p -> next;
	p -> next = ptr;
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
	
	head -> data = 23;
	head -> next = second;
	
	second -> data = 24;
	second -> next = third;
	
	third -> data = 25;
	third -> next = fourth;
	
	fourth -> data = 26;
	fourth -> next = NULL;
	
	printf("Linked List before Insertion : \n");
	LinkedList_Traversal(head);
	printf("Linked List after Insertion : \n");
	head = InsertAtIndex(head,50,3);
	LinkedList_Traversal(head);
 	return 0;
}
