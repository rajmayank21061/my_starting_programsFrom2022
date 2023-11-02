#include<iostream>
using namespace std;
int main()
{
    int i=1,num=1,n;
    cout<<"how many order matrix you want:"<<endl;
    cin>>n;
    while(i<=n) 
    {
        int j=1;
        while(j<=i)
        {
            cout<<num;
            num++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}