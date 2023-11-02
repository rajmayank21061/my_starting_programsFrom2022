#include<iostream>
 using namespace std;
 int main()
 
{
    int i=0,sum=0,n=32;
    while(i<=n)
    {
        sum=i+sum;
        i=i+1;
    }
     cout<<sum<<" ";
}