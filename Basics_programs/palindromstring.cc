#include<iostream>
#include<string>
using namespace std;
char tolowercase( char ch)
{
    if( ch >='a' && ch <='z' )
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' +'a';
        return temp;
    }
}
bool ispalindrome( char name[] , int n)
{
    int s = 0;
    int e = n-1;
    while( s<=e)
    {
        if( tolowercase(name[s]) != tolowercase(name[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        return 1;
    }
}
int getlength( char name[])
{
    int count =0;
  for( int i =0; name[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}
int main()
{
    char name[16];
    cin>>name;
    int len = getlength(name);
    cout<<ispalindrome(name, len)<<endl;
    return 0;
}