#include<iostream>
using namespace std;

class employe{
    private:
    int a , b , c;
    public:
    int d,e;
    void setdata( int a1,int b1, int c1); //fn decleration only let
    void getdata(){
    cout<<"Value of a is: "<< a <<endl;
    cout<<"Value of b is: "<< b <<endl;
    cout<<"value of c is: "<< c <<endl;
    cout<<"value of d is: "<< d <<endl;
    cout<<"value of e is: "<< e <<endl;
    }
};
void employe :: setdata( int a1,int b1 ,int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
  employe raj;
  raj.d = 32;
  raj.e = 93;
  raj.setdata(1,3,5);
  raj.getdata();
  return 0;
}