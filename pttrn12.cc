#include<iostream>
using namespace std;
int main (){
    int i=1,n=5;
    while(i<=n){
        int j=1;
        while(j<=i){
           char ch='A'+i+j-2;
           cout<<ch;
           ch++;
           j++;
        }
        cout<<endl;
        i++;
    }
}