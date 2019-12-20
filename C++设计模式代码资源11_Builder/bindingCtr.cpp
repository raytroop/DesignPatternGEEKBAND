/*
在C++， 构造函数中调用virutal function是进行静态绑定， 不会调用子类的virtual function。
伦理-> 逐层构造
*/

#include <iostream>
using std::cout;
using std::endl;

class Base {
public:
    Base() {
        cout << "Base::Base" << endl;
        hello();
    }

    virtual void hello() {
        cout << "Base::hello" << endl;
    }
};

class Derived: public Base {
public:
    Derived() {
        cout << "Derived::Derived" << endl;
        hello();
    }

    virtual void hello() {
        cout << "Derived::hello" << endl;
    }
};


int main() {
    Base* objptr = new Derived();

    delete objptr;

    return 0;
}

/*
Base::Base
Base::hello
Derived::Derived
Derived::hello
*/