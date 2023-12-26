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

 // Case : 1 --> Insertion at first 
struct Node *InsertAtFirst(struct Node *head,int data)
{
	struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	ptr -> next = head;
	ptr -> data = data;
	return ptr;
}
// Case : 2 --> Insertion at given Index 
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

// Case : 3 --> Insertion at the End 
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

// Case : 4 --> Insertion After Node 
struct Node *InsertAfterNode(struct Node *head,struct Node *previous_Node,int data)
{
	struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	ptr -> data = data;
	ptr -> next = previous_Node -> next;
	previous_Node -> next = ptr;
	return head;
}


// Case : 5 --> Deletion At First Node 
struct Node *DeleteAtFirst(struct Node *head)
{
	struct Node *ptr = head;
	head = head -> next ;
	free(ptr);
	return head;
}

// Case : 6 --> Deletion At given index 
struct Node *DeleteAtIndex(struct Node *head,int index)
{
	struct Node *ptr = head;
	struct Node * q = ptr -> next;
	for(int i=0;i != index-1;i++)
	{
		ptr =  ptr -> next;
		q = q -> next;
	}
	ptr -> next = q -> next;
	free(q);
	return head;
}

// Case : 7 --> Deletion at the end 
struct Node *DeleteAtEnd(struct Node *head)
{
	struct Node *p = head;
	struct Node *q = p -> next;
	while(q->next != NULL)
	{
		p = p -> next;
		q = q -> next;
	}
	p -> next = NULL;
	free(q);
	return head;
}

// Case : 8 --> Deletion at the given value 
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
 	struct Node *head;
 	struct Node *second;
 	struct Node *third;
 	struct Node *fourth;
 	
 	head = (struct Node*) malloc(sizeof(struct Node));
 	second = (struct Node*) malloc(sizeof(struct Node));
 	third = (struct Node*) malloc(sizeof(struct Node));
 	fourth = (struct Node*) malloc(sizeof(struct Node));
 	
 	head -> data = 20;
 	head -> next = second;
 	
 	second -> data = 21;
 	second -> next = third;
 	
 	third -> data = 25;
 	third -> next = fourth;
 	
 	fourth -> data = 26;
 	fourth -> next = NULL;
 	
 	int choice;
	 while(choice != 9)
 	{
 		printf("\nMENU\n1.Insertion at First\n2.Insertion at Index\n3.Insertion at End\n4.Insertion after Node\n");
 		printf("5.Delete First Node\n6.Delete Index Node\n7.Delete End Node\n8.Delete at the given vlaue\n9.Exit Point\n");
 		printf("\nEnter your choice : ");
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
 					printf("LinkedList before deletion : \n");
 					LinkedList_Traversal(head);
 					printf("LinkedList after deletion : \n");
 					head = DeleteAtFirst(head);
 					LinkedList_Traversal(head);
 					break;
 					
 			case 6:
 					printf("LinkedList before deletion : \n");
 					LinkedList_Traversal(head);
 					printf("LinkedList after deletion : \n");
 					head = DeleteAtIndex(head,2);
 					LinkedList_Traversal(head);
 					break;
 					
 			case 7:
 					printf("LinkedList before deletion : \n");
 					LinkedList_Traversal(head);
 					printf("LinkedList after deletion : \n");
 					head = DeleteAtEnd(head);
 					LinkedList_Traversal(head);
 					break;
 			
 			case 8:
 					printf("\nLinkedList before the deletion : \n");
					LinkedList_Traversal(head);
	
					int value;
					printf("\nEnter the value for deletion : ");
					scanf("%d",&value);
	
					printf("\nLinkedList after the deletion : \n");
					head= DeleteAtGivenValue(head,value);
					LinkedList_Traversal(head);
 			
			 case 9:
 					printf("Exit point");
 					break;
 			
 			default : 
 					printf("\nEnter correct choice\n");
 					break;
		}
	 }
 	return 0;
}
