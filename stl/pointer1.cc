#include<iostream>
using namespace std;
int main()
{
//    int a = 3;
//    int *p = &a;
//    int *q = 0;
//     q = &a;
//    cout<< &a <<" " << p << " " << *p <<endl;
//    cout<< q << " " << *q;
    int num = 3;
    int p = num;
    p++;
    cout<< num <<endl;
    int *q = &num;
    cout<< "before  " << num <<endl;
    (*q)++;
    cout<< "after  " << num <<endl;
    int *r = q;
    cout<< *q <<" "<<*r<<endl;
    int *t = &num; //let address of a is 100;
    *t = *t + 1;
    cout<<" value of *t "<< *t<<endl;
    t = t+1; //t is 104; because t = 100 + 4;
    cout<<"value of t "<< t<<endl;

}