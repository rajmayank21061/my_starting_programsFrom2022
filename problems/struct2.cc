#include<iostream>
using namespace std;
struct teacher {
    string name;
    int salary;
    bool lang;
    char sex;
    void teacherdetails(){
    cout<<"teacher_details is :"<< name<<" "<< salary<<" "
    << (lang ? "YES" : "NO")<<" "<< sex << endl;
    }
};
int main()
{
   teacher tea[3];
 tea[1] = {"lora anthony", 23230,true, 'F'};
 tea[2] = {"monica", 235423, false , 'F'};
 tea[3] = {"raj", 98000, true , 'M'};
for(int i = 1; i<=3; i++)
{
    tea[i].teacherdetails();
}
 return 0;
}