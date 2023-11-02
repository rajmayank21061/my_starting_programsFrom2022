#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Warm");
    s.push("Love");
    s.push("Death");
    cout<<"Top Element :"<< s.top() <<endl;
    s.pop();
    cout<<"Afer poping :"<< s.top() <<endl;
    s.empty();
    cout<<"Size of s :"<< s.size() <<endl;
}