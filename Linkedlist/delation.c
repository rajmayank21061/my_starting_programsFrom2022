
#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node * next;
};

void linked_list_traversal( struct Node *ptr)
{
    while( ptr != NULL)
    {
        printf("%d \n", ptr -> data);
        ptr = ptr -> next;
    }
	printf("\n");
}

// Case 1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * newnode = head;
    head = head->next;
    free(newnode);
    return head;
}

struct Node *insertAt_First(struct Node *head , int data)
{
    struct Node *ptr;
    ptr = (struct Node*)malloc(sizeof( struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    // allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // link first and second node
    head -> data = 43;
    head -> next = second;

    second -> data = 89;
    second -> next = third;
    
    third -> data = 50;
    third -> next = NULL;

    linked_list_traversal( head);

   head = insertAt_First(head,465);
   linked_list_traversal(head);
   head = deleteFirst(head);
   linked_list_traversal(head);
   
}