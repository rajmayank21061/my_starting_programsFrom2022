#include<iostream>
using namespace std;
int main(){
    for( int a=0,b=5,c=1 ; a<=5,b>=1,c<=5 ; a++,b--,c++ )
    {
        cout<< a << " " << b << " " << c << endl;
    }
    int sum=0;
    for(int f=1 ; f<=5 ; f++ ){
        //sum=sum+f;
        sum += f;
    }
    cout<< sum <<endl;
}