#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Kat");
    q.push("Man");
    q.push("Oat");
    cout<<"Front element : "<< q.front() <<endl;
    cout<<endl;
    cout<<"After poping"<<endl;
    q.pop();
    cout<<"Front element : "<<q.front() <<endl;
    cout<<"Size :"<<q.size() <<endl;
}
