#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number  ";
    cin>>n;
    int sum=0;
    int pro=1;
    while(n!=0){
        int digit=n%10;
        pro= pro * digit;
        sum= sum + digit;
        n=n/10;
    }
    int Answer = pro - sum;
    return Answer;
}