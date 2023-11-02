#include<iostream>
using namespace std;
int main()
{
    int n,i=1 ;
    cin>>n;
    while(i<n)
    {
    if(n%i==0)
    {
        cout<<"It is prime for "<<i;
    }
    else{
        cout<<"It is not prime for"<<i;
    }
    i=i+1;
}
}
