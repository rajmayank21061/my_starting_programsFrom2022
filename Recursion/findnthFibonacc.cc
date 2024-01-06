#include<iostream>
using namespace std;
int fibanacci(int n){
if(n==0){
    return 0;
}
if(n==1){
    return 1;
}
int ans = fibanacci(n-1) + fibanacci(n-2);
return ans;
}


int main(){
    
    for(int i =0; i<5; i++){
    cout<< fibanacci(i) ;
    }

}