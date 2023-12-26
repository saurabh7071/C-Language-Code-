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
 // Case-1
struct Node *InsertAtFirst(struct Node *head,int data)
{
	struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	ptr -> next = head;
	ptr -> data = data;
	return ptr;
}
// Case-2
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

// Case-3
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

// Case-4
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
	
	head -> data = 10;
	head -> next = second;
	
	second -> data = 20;
	second -> next = third;
	
	third -> data = 30;
	third -> next = fourth;
	
	fourth -> data = 40;
	fourth -> next = NULL;
	
	int choice;
	printf("\nMENU\n1.Insertion at First\n2.Insertion at Index\n3.Insertion at End\n4.Insertion after Node\n5.Exit Point\n");
	while(choice != 5)
	{
		printf("\nEnter you choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
					printf("Linked List before Insertion : \n");
					LinkedList_Traversal(head);
					printf("Linked List after Insertion : \n");
					head = InsertAtFirst(head ,100);
					LinkedList_Traversal(head);
					break;
					
			case 2:
					printf("Linked List before Insertion : \n");
					LinkedList_Traversal(head);
					printf("Linked List after Insertion : \n");
					InsertAtIndex(head,50,3);
					LinkedList_Traversal(head);
					break;	
					
			case 3:
					printf("Linked List before Insertion : \n");
					LinkedList_Traversal(head);
					printf("Linked List after Insertion : \n");
					InsertAtEnd(head,78);
					LinkedList_Traversal(head);
					break;
					
			case 4:
					printf("Linked List before Insertion : \n");
					LinkedList_Traversal(head);
					printf("Linked List after Insertion : \n");
					InsertAfterNode(head,second,88);
					LinkedList_Traversal(head);
					break;
			case 5:
					printf("Exit point");
					break;
			
			default :
					printf("please enter correct choice beacause your choice is incorrect");
					break;	
		}
	}
 	return 0;
}

