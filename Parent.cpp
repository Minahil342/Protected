// parent.cpp
#include <iostream>
using namespace std;

// Forward declare Child class
class Child {
public:
    void childFunction();
};

class Parent {
public:
    void parentFunction() {
        cout << "This is the PARENT class function." << endl;

        Child c;
        c.childFunction();  // Call child's function
    }
};
