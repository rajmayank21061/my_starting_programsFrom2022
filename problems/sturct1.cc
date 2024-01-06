#include<iostream>
using namespace std;

struct student {
    string name;
    int age;
    float marks;
    
  
    void stdetails() {
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
        cout << "Marks is: " << marks << endl;
    }
};

int main() {
    student st;
    st.name = "John";  
    st.age = 23;
    st.marks = 84.5; 
    student sttoo = { "ronhan", 42, 90.22 };
    st.stdetails();
    
    cout << endl;
 
    sttoo.stdetails();
    return 0;
}
