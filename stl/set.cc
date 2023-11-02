#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(1);
    s.insert(8);
    for( auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    //auto keyword useful in iterator case or situation;
    //set<int>::iterator i; => auto i;
    for( auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"-5 is present or not => "<< s.count(-5);
     cout<<endl;
    //find return iterator if find
    set<int>::iterator itr = s.find(7);
    cout<<*itr<<endl;
    for( auto it = itr; itr != s.end(); itr++)
    {
        cout<<*itr<<" "<<endl;
    }
}