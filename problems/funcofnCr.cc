#include<iostream>
using namespace std;
int fal(int num)
{
    int factr = 1;
    for ( int i = 1; i<=num; i++){
        factr = factr * i;
    }
    return factr;
}
int nCr(int n,int r)
{
   int p = fal(n);
   int q = fal(r) * fal(n-r);
   int ans = p/q;
   return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Anser is: "<<nCr(a,b)<<endl;
    return 0;
}