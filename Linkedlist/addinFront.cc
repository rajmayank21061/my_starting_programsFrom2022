#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void printnode(node *hd)
{
    while( hd != NULL)
    {
        cout<< hd -> data <<endl;
        hd = hd -> next;
    }
}
void push( node **headRef, int Newdata)
{
    node *newnode = new node();
    newnode -> data = Newdata;
    newnode -> next = *headRef;
    *headRef = newnode;
}
int main()
{
  node *head = NULL;
   push(&head,3);
   push(&head,1);
   push(&head,293);
  printnode(head);
}