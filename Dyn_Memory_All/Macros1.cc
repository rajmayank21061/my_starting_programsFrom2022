#include<iostream>
using namespace std;
#define LENGTH 10 
#define WIDTH 5
#define NEWLINE '\n'
#define VOLUME(l,b,h) ( l * b * h )
#define min(m, n) (((m) < (n)) ? (m) : (n))

inline int getmax( int& d, int& e )
{
    int max = ( d > e ) ? d : e;
    return max;
}

int main()
{
 int area; 
 
 area = LENGTH * WIDTH;
 cout << area;
 cout << NEWLINE;
 cout << VOLUME(3,4,2);
 cout << NEWLINE;
 cout<<"The small numbers is :" << min(12,5);
 cout << NEWLINE;
 int d = 10, e = 5;
 cout<< "max value is " << getmax(d,e) ;
 return 0;
}

// C++ Program to demonstrate inline functions and classes
/* #include <iostream>

using namespace std;

class operation {
	int a, b, add, sub, mul;
	float div;

public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
};
inline void operation ::get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}

inline void operation ::sum()
{
	add = a + b;
	cout << "Addition of two numbers: " << a + b << "\n";
}

inline void operation ::difference()
{
	sub = a - b;
	cout << "Difference of two numbers: " << a - b << "\n";
}

inline void operation ::product()
{
	mul = a * b;
	cout << "Product of two numbers: " << a * b << "\n";
}

inline void operation ::division()
{
	div = a / b;
	cout << "Division of two numbers: " << a / b << "\n";
}

int main()
{
	cout << "Program using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}
*/
