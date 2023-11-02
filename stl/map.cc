#include<iostream>
#include<map>    //map are sorted;
using namespace std;
int main()
{
   map<int,string> m;
   m[1] = "Raj";
   m[5] = "Mayank";
   m[2] = "Bablu";
   m.insert({3,"kumar"});
   for( auto i : m)
   {
    cout<< i.first <<" "<< i.second <<endl;
   }
   cout<<endl;
   cout<<"After erase:"<<endl;
   m.erase(5);
   for( auto i : m)
   {
    cout<< i.first <<" "<< i.second <<endl;
   }
}