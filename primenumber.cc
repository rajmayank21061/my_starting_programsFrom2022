#include<iostream>
using namespace std;
int main()
{
    int num;
   cout<<"Enter the number who checked is prime:"<<endl;
    cin>>num;
    int i=2;
    while(num>i){
    if(num%i==0)
    {
    cout<<"not prime"<<i<<endl;
    }
    else{
        cout<<"prime"<<i<<endl;
    }
    i=i+1;
    }
}