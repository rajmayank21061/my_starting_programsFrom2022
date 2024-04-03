#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n=5;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
}