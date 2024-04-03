#include<iostream>
using namespace std;
int main(){
    int i=1;
    for ( ; ; ){
        if(i<=5){
            cout<<i<<endl;
            i++;
        }
        else{
            break;
        }
    }
}