#include<iostream>
using namespace std;
void print( int *p)
{
    cout<< *p <<endl;
}
void update( int *k)
{
    //you update only value but not adderess 
    // k = k + 1;
    // cout<< "Inside : "<< k <<endl;
    *k = *k +1;
}
int main()
{
    int array[4] = {4,6,2,7};
    int *arr = &array[0];
//    char ch[5] = {"djif"};
//    cout<< arr <<endl;
//    cout<< ch <<endl;
//    char *c = &ch[0];
//    cout<< c <<endl;
//    cout<< *c <<endl;
//    cout<< &c <<endl;
  
   cout<< "Before : "<< *arr<<endl;

   update(arr);

   cout<<"after : "<< *arr<<endl;
}