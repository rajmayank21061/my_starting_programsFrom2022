#include<iostream>
using namespace std;
int main (){
    int i=1,n=4;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch= 'D'+j-i;
            cout<<ch;
            ch--;
          j++;
        }
        cout<<endl;
        i++;
    }
}