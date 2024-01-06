#include<iostream>
using namespace std;
int findPower( int a, int b){
    if(b==0){  // base case
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = findPower(a,b/2);   //recursive relation
    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
int a,b;
cout<< "give number and also give power: ";
cin>> a >> b;
cout<<findPower(a,b);
}