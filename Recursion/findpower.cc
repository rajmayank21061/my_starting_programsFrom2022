#include<iostream>
using namespace std;
int power(int n)
{
    if( n == 0)
    return 1;
   int sprob = power(n-1);
   int bigprob = 2 * sprob;
   return bigprob;
}
int main()
{
  int n;
  cout<< "give power number";
  cin>>n;
  cout<<"\n"<<endl;
  int ans = power(n);
  cout<< ans <<endl;
}