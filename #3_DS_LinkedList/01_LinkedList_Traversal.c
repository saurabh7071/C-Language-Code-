#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};
void linkedList_Traversal(struct Node *head)
{
	while(head != NULL)
	{
		printf("Element : %d\n",head->data);
		head = head->next;
	}
}
int main()
{
 	struct Node *head;
 	struct Node *second;
 	struct Node *third;
 	struct Node *fourth;
 	
 	// Allocate the memory for nodes of linkedlist in [Heap] 
 	head = (struct Node*)malloc(sizeof(struct Node));	
 	second = (struct Node*)malloc(sizeof(struct Node));
 	third = (struct Node*)malloc(sizeof(struct Node));
 	fourth = (struct Node*)malloc(sizeof(struct Node));
 	
 	// Link first and second nodes
 	head -> data = 11;
 	head -> next = second;
 	
 	// Link second and third nodes
 	second -> data = 22;
 	second -> next = third;
 	
	// Link third and fourth nodes	 	
 	third -> data = 33;
 	third -> next = fourth;
 	
 	//Terminate the list at the fourth node..
 	fourth -> data = 44;
 	fourth -> next = NULL;
 	
 	linkedList_Traversal(head);
 	return 0;
}
