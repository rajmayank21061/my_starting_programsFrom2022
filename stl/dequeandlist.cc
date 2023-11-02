#include<iostream>
#include<deque>
#include<list>
using namespace std;
int main()
{
    deque<int> m;
    m.push_back(1);    //Back
    m.push_front(3);  //Front
    for(int i:m)
    {
        cout<<i<<endl;
    }
    m.pop_front(); // write Fornt or Back in your choice.
    for(int k:m)
    {
        cout<<k<<endl;
    }
    cout<< m.empty() <<endl;
    cout<< m.size() <<endl;
    deque<int> d;
    d.push_back(3);
    d.push_back(5);
    d.push_front(8);
    for(int j:d)
    {
        cout<<j<<" "<<endl;
    }
    cout<<"After erasing:"<<endl;
    d.erase( d.begin() , d.begin()+1);
    for(int i:d)
    {
        cout<<i<<" "<<endl;
    }
    cout<<endl;
    list<int> g;
    g.push_back(11);
    g.push_back(12);
    g.push_front(42);
    for(int t : g){
        cout<<t<<" "<<endl;
    }
    cout<<endl;
    g.pop_front();
    g.pop_back();
    for(int k : g)
    {
        cout<<k<<" "<<endl;
    }
    cout<<endl;
    cout<< g.empty() <<endl;


}