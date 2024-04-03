#include<iostream>
#include<string>  // Include the <string> header for using std::string
using namespace std;

class Honda {
public:
    string name;  // Change char array to std::string for name
    int price;

    // Default constructor
    Honda() {
        cout << "Hey This is only Default Constructor." << endl;
        
    }

    // Parametric Constructor
    Honda(int price) {
        this->price = price;
    }

    // Parametric Constructor with string name
    Honda(string name, int price) {
        this->name = name;
        this->price = price;
    }

    // Copy Constructor
    Honda(const Honda &objpass) {//pass by reference
        this->price = objpass.price;
        this->name = objpass.name;
    }

    void print() {
        cout << "The Fruit name is: " << name << " and price is: " << price << endl;
    }
};

int main() {
    Honda ig;//statically call
    Honda *hg = new Honda();//dynamically call
    // Correcting the character array in the first object
    Honda sys("bin", 3400);
    sys.print();

    // Correcting the character array in the second object
    Honda R("hip", 2500);
    R.print();
    //copy constructor
    Honda H(R);
    H.print();
    

    return 0;
}
