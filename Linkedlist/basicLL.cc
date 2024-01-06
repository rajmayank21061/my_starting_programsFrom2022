#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void printlist(node *n){
while(n != NULL)
{
    cout<< n -> data <<endl;
    n = n -> next;
}
}
int main()
{
node *head = new node();
node *second = new node();
node *third = new node();
head -> data = 4;
head -> next = second;
second -> data = 13;
second -> next = third;
third -> data =534;
third -> next = NULL;
printlist(head);
}