#include<iostream>
using namespace std;
int main(){
    string s= "eifjihssd";
    int hash[340] = {0};
    for(int i =0; i<s.size(); i++){
        hash[s[i]]++;

    }
    int q =4;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<< hash[c] <<endl;
    }
    return 0;
}