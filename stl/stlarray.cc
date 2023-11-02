#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basicarray[6] = {2,5,6,32,134};
    array<int,6> a = {1,4,6,8,14,55};
    int size = a.size();
    for( int i = 0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"At: "<< a.at(3) <<endl;
    cout<<"Check array is empty or not :"<< a.empty() <<endl;
    cout<<"Front: "<< a.front() <<endl;
    cout<< "last element :"<< a.back() <<endl;
}