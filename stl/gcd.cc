//greatest common divider
#include<iostream>
using namespace std;

int gcd(int n1, int n2)
{
    if( n1 ==0 )
    {
        return n2;
    }
    if( n2 == 0)
    {
        return n1;
    }
    while(n1 != n2){
    if( n1 > n2 )
    {
        n1 = n1 - n2;
    }
    else
    {
       n2 = n2 - n1;
    }
}
}
int main()
{
   int  result = gcd(27,234);
   cout<<result<<endl;
}