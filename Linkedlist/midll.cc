#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void printlist(node *n){
    int count = 0;
while(n != NULL)
{
    cout<< n -> data <<endl;
    n = n -> next;
    count++;
}
cout<<"Total number of nodes in list: "<<count<<endl; 
}
void middleEle( node *head){
    node *mid = head;
    node *temp = head;
    if( head != 0)
    {
    while( temp != NULL && temp -> next != NULL)
    {
       temp = temp -> next -> next;
       mid = mid -> next;
    }
      cout<< "SO middle element is: "<< mid -> data <<endl; 
    } 
}
int main(){
struct node *head = new node;
struct node *second = new node;
struct node *third = new node;
struct node *four = new node;
struct node *five = new node;
head -> data = 33;  head -> next = second;
second -> data = 11;  second -> next = third;
third -> data = 32;  third -> next = four;
four -> data = 453; four -> next = five;
five -> data = 14; five -> next = NULL;
printlist(head);
middleEle(head);
}