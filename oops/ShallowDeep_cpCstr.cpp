#include<iostream>
#include<string>
using namespace std;
class Family{
    private:
    int money;
    public:
    char fname[];
    char *name;//name[...];
    int time;
    Family(){
       cout<<"simple constructor called"<<endl;
       name = new char[100];
    }
    int getMoney(){
        return money;
    }
    int getTime(){
        return time;
    }
    void setName(char fn[]){
    fname = fn;
    }
    void setTime(int time){
    this->time = time;
    }
    void setMoney(int mo){
        money = mo;
    }
    void setFamily(char name[]){
        strcpy(this->name,name);
    }
    void print(){
     cout<<this->fname<<" ,";
     cout<<this->time<<" ,";
     cout<<this->name<<" ,";
     cout<<this->money;
    }
};
int main()
{
Family raj;
raj.setName('k',34);
raj.setMoney(8080);
raj.setTime(5);
raj.setFamily('PO');
raj.print();
return 0;
}