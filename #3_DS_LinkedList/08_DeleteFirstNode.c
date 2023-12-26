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
		printf("Element : %d\n",head->data);
		head = head -> next;
		
	}
}

struct Node *DeleteFirstNode(struct Node *head)
{
	//struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	struct Node *ptr = head;
	head = head -> next;
	free(ptr);
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
 	
 	head -> data = 90;
 	head -> next = second;
 	
 	second -> data = 91;
 	second -> next = third;
 	
 	third -> data = 92;
 	third -> next = fourth;
 	
 	fourth -> data = 93;
 	fourth -> next = NULL;
 	
 	printf("Linked List before Deletion : \n");
 	LinkedList_Traversal(head);
 	printf("Linked List after Delete the first Node : \n");
 	head = DeleteFirstNode(head);
 	LinkedList_Traversal(head);
 	return 0;
}
