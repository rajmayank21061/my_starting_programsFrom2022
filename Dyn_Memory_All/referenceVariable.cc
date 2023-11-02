#include<iostream>
using namespace std;
/*  // Bad practice don't doing this
int& update2(int p)
{
  int num = p;
  int& ans = num;
  ans = ans +2;
  return ans;
}                 //after this Memory clean;
*/
void update1(int &m)
{
  m--;
}
void update(int n)
{
    n++;
}
int main()
{
   int a = 34;
   cout << "Before :" << a<<endl;
   update1(a);
   cout<< "After :" << a <<endl;
}