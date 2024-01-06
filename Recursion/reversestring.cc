#include<iostream>
#include<string.h>
using namespace std;
void reverse_string(string &str,int i, int j){
    //base condition
    if( i>j){
        return;
    }
        swap(str[i],str[j]);
        i++;
        j--;
        //recursive call
        reverse_string(str,i,j);
}
int main()
{
string str = "ram" ;
int length = str.size();
reverse_string(str,0,length-1);
cout<< str;
}