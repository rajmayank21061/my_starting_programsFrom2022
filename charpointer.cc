#include<iostream>
using namespace std;
int main()
{
    char arr[] = {"andsnd"};
    cout<< arr <<endl;
    char *ch = &arr[0];
    cout<< ch <<endl;
    cout<< *ch << " and "<< &ch << " "<< &arr <<endl;
}