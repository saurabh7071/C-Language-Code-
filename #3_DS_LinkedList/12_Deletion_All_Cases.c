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

struct Node *DeleteAtFirst(struct Node *head)
{
	struct Node *ptr = head;
	head = head -> next ;
	free(ptr);
	return head;
}

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
 	
 	head -> data = 18;
 	head -> next = second;
 	
 	second -> data = 19;
 	second -> next = third;
 	
 	third -> data = 20;
 	third -> next = fourth;
 	
 	fourth -> data = 21;
 	fourth -> next = NULL;
 	
 	int choice;
 	printf("\nMENU\n1.Delete First Node\n2.Delete Index Node\n3.Delete End Node\n4.Exit Point\n");
 	while(choice != 4)
 	{
 		printf("\nEnter your choice : ");
 		scanf("%d",&choice);
 		
 		switch(choice)
 		{
 			case 1:
 					printf("LinkedList before deletion : \n");
 					LinkedList_Traversal(head);
 					printf("LinkedList after deletion : \n");
 					head = DeleteAtFirst(head);
 					LinkedList_Traversal(head);
 					break;
 					
 			case 2:
 					printf("LinkedList before deletion : \n");
 					LinkedList_Traversal(head);
 					printf("LinkedList after deletion : \n");
 					head = DeleteAtIndex(head,2);
 					LinkedList_Traversal(head);
 					break;
 					
 			case 3:
 					printf("LinkedList before deletion : \n");
 					LinkedList_Traversal(head);
 					printf("LinkedList after deletion : \n");
 					head = DeleteAtEnd(head);
 					LinkedList_Traversal(head);
 					break;
 			case 4:
 					printf("Exit point");
 					break;
 			
 			default : 
 					printf("\nEnter correct choice");
 					break;
		}
	 }
 	return 0;
}
