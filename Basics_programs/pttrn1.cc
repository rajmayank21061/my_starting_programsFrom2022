#include<iostream>
using namespace std;
int main(){
    int i=1,n=3;
    int print=1;
    while(i<=n){
        int j=1;
        while(j<=n){
        cout<<print;    
        print++;
        j++;
        }
        cout<<"\n";
        i++;
    }
}