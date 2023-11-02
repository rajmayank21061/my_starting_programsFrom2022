#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> n;
    vector<int> a(5,1);
    for(int j:a){
        cout<<j<<" "<<endl;
    }
    //for vector copy;
    vector<int> dec(a);
    for(int l:dec)
    {
        cout<<l<<" "<<endl;
    }
    cout<<n.capacity()<<endl;
    n.push_back(42);
    cout<<n.capacity()<<endl;
      n.push_back(23);
    cout<<n.capacity()<<endl;
      n.push_back(12);
    cout<<n.capacity()<<endl;
    cout<<"Size :"<<n.size()<<endl;
    cout<<"Before Pop"<<endl;
for(int i:n)
{
    cout<<i<<" "<<endl;
}
cout<<"After Pop"<<endl;
n.pop_back();
for(int i:n)
{
    cout<<i<<" "<<endl;
}
//In clear , size is zero but capacity do not zero;
n.clear();
cout<< "Size : "<<n.size()<<endl;


}