#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 1; // Accessible only within Base class

protected:
    int protectedVar = 2; // Accessible within Base and derived classes

public:
    int publicVar = 3; // Accessible anywhere

    // Getter for privateVar to access it outside the class
    int getPrivateVar() {
        return privateVar;
    }
};

class Derived : public Base {
public:
    void accessBaseMembers() {
        // cout << privateVar; // Not accessible (Error)
        cout << "Protected variable: " << protectedVar << endl; // Accessible
        cout << "Public variable: " << publicVar << endl; // Accessible
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Accessing Base class members directly
    // cout << baseObj.privateVar; // Not accessible (Error)
    // cout << baseObj.protectedVar; // Not accessible (Error)
    cout << "Public variable: " << baseObj.publicVar << endl; // Accessible

    // Accessing privateVar through a public getter
    cout << "Private variable (via getter): " << baseObj.getPrivateVar() << endl;

    // Accessing members from Derived class
    derivedObj.accessBaseMembers();

    return 0;
}
