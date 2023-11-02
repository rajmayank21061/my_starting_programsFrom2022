#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {3,5,1,66,13,6};
    for(int i = 0; i<v.size(); i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>::iterator it = v.begin();
    for( it = v.begin(); it != v.end(); ++it)
    {
        cout<<*it <<endl;
    }
}