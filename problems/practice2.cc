#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int num,ans;
cout<<"Enter a integer number :";
cin>>num;
for(int i=0;i<=30;i++){
    ans = pow(2,i);
    if(ans == num){
        cout<<"yes";
    }
    else
    {
        cout<<"not";
    }
}
}