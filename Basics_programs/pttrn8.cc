#include<iostream>
using namespace std;
int main()
{
int i=1,n=3;
while(i<=3){
    int j=1;
    while(j<=3)
    {
      char ch='A';
      cout<<ch;
      ch=ch+1;
      j++;
    }
    cout<<endl;
    i++;
}
}