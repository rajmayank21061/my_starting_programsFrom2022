#include<iostream>
using namespace std;

class Worker {
public:
    char name[50];
    int salary;

    Worker() {
        cout << "jeloo";
    }

    void input() {
        cout << "name: ";
        cin >> name;
        cout << "salary: ";
        cin >> salary;
    }

    void display() {
        cout << endl;
        cout << "name: " << name << " " << "salary: " << salary << endl;
    }
};

int main() {
    // dynamic call
    Worker *ker = new Worker;
    ker->input();
    ker->display();

    // Remember to delete dynamically allocated memory
    delete ker;

    return 0;
}
