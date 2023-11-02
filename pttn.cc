#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"how many numbers do you want to checked"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}