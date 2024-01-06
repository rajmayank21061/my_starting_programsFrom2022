#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}
void printer(node *n)
{
   while( n != NULL)
   {
    cout<< n -> data <<endl;
    n = n -> next;
   }
}
void Insert_mid( node *prev_node , int a)
{
 node *newn = new node();
 newn ->next = prev_node -> next;
 prev_node -> next = newn;

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