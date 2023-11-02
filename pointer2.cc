#include<iostream>
using namespace std;
void update( int **p )
{
    //p = p +1;//no change
    //*p = *p +1;//yes change
    **p = **p +1;//yes change
}
int main()
{
   int v = 32;
   int* p1 = &v;
   int** p2 = &p1;

 /*  cout<< p1 <<" or " << &v <<endl;
   cout<< *p1 <<" or " << v <<endl;
   cout<< p2 <<" or " << &p1 <<endl;
   cout<< **p2 <<" or " <<endl;
   */
   cout<<"Before :"<<endl;
   cout << v << endl;
   cout << p1 << endl;
   cout << p2 << endl;
   update(p2);
   cout<<"After :"<<endl;
    cout << v << endl;
   cout << p1 << endl;
   cout << p2 << endl;

}