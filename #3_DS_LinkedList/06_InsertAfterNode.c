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

struct Node *InsertAfterNode(struct Node *head,struct Node *previous_Node,int data)
{
	struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	ptr -> data = data;
	ptr -> next = previous_Node -> next;
	previous_Node -> next = ptr;
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
	
	head -> data = 40;
	head -> next = second;
	
	second -> data = 50;
	second -> next = third;
	
	third -> data = 60;
	third -> next = fourth;
	
	fourth -> data = 70;
	fourth -> next = NULL;
	
	printf("Linked List before Insertion : \n");
	LinkedList_Traversal(head);
	printf("Linked List after Insertion : \n");
	InsertAfterNode(head,second,11);
	LinkedList_Traversal(head);
 	return 0;
}

