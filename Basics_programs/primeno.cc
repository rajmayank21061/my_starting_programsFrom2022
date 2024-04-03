#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number     ";
    cin>>n;
    for(int i=2;i<n;i++)
    {  
        if(n%i==0){
          cout<<"Not a prime number"<<endl;
          break;
         }
    else{
        cout<<"a prime number"<<endl;
        break;
    }
}
}