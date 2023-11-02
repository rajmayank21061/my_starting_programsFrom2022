#include<iostream>
#include<math.h>
using namespace std;
int power(int num1,int num2){
    int i;
    int ans=1;
    for(i=1;i<=num2;i++){
        ans = ans * num1;
    }
    return ans;
}
int main(){
    int a,b;
   
    cout<<"Enter value a & b "<<endl;
    cin>>a>>b;
     int Answer = power(a,b);
    cout<<"Answer"<<Answer;

}