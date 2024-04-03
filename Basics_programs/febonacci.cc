#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    int i=1;
    int n,c;
    cout<< "How many times you till end febonacci series: ";
    cin>>n;
    while(i<=n)
    {
        c = a + b;
        cout<< c << " ";
        a=b;
        b=c;
        i++;
    }
}