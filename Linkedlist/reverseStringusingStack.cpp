#include<iostream>
#include<stack>
using namespace std;
 void reversestring( string s)
 {
    int len = s.length();
    stack<string> st;
    for( int i = 0 ; i<len; i++)
    {
        string word;
        while(s[i] != ' ' && i < len )
     {
        word += s[i];
        i++;    
    }
    st.push(word);
    }
    while(!st.empty()){
        cout<< st.top() <<" ";
        st.pop();
    }
 }
 int main()
 {
    string st = "hello man !";
    reversestring(st);
 }