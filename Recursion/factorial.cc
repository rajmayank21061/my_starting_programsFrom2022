#include<iostream>
using namespace std;
int factorial( int n)
{
    if( n == 0)      //base case
    return 1;
    //recursive relation
    int l = factorial(n-1);
    int p = n * l;
    return p;   // return n * factorial(n-1);
}
//Driver code
int main()
{
  int n;
  cin>>n;
  int ans =  factorial(n);
  cout<< ans <<endl;
} 