#include <iostream>
#include <string>

using namespace std;

class Base {
public:
	int publicVar = 10;

	void publicFunc() {
		cout << "Base::publicFunc()" << endl;
	}

	Base() {
		cout << "Base construstor" << endl;
	}
};

class Derived : private Base {
public:
	
};