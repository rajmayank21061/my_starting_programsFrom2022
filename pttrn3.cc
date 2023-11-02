#include<iostream>
using namespace std;
int main(){
   int n,count=1,i=1;
   cout<<"Enter matrix order"<<endl;
   cin>>n;
   while(i<=n){
    int j=1;
    while(j<=i){      //interchanging i or n square or triangle matrix;
        cout<<count<<" ";
        count=count+1;
        j++;
    }
    cout<<endl;
    i++;
   }

}