#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	struct Node *previous;
};
void Traversal_Forward(struct Node *head)
{
	while(head != NULL)
	{
		printf("%d\n",head -> data);
    	head = head -> next;
	}
}
/*void Traversal_Backward(struct Node *head)
{
	while(head != NULL)
	{
		printf("%d\n",head -> data);
		head = head -> previous;
	}
}*/

struct Node *InsertAtFirst(struct Node *head,int value)
{
	struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	
	ptr -> data = value;
	ptr -> next = head;
	ptr -> previous = NULL;
	
	if(head != NULL)
	{
		head -> previous = ptr;
	}
	head = ptr;
	return ptr;
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
	
	head -> data = 56;
	head -> next = second;
	head -> previous = NULL;
	
	second -> data = 57;
	second -> next = third;
	second -> previous = head;
	
	third -> data = 58;
	third -> next = fourth;
	third -> previous = second;
	
	fourth -> data = 59;
	fourth -> next = NULL;
	fourth -> previous = third;
	
	printf("LinkedList before Insertion :\n");
	Traversal_Forward(head);
	//Traversal_Backward(head);
	printf("LinkedList after Insertion :\n");
	InsertAtFirst(head,25);
	Traversal_Forward(head);
		
 	return 0;
}
