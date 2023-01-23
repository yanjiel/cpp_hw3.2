//Use static duration objects to write a program 
//that prints “Hello, world!” with the following
//main function :
//int
//main()
//return 0;
//
//Extra credit Give a solution that depends on
//constructor ordering.The more intricate the
//dependence, the greater the extra credit.

//#include "hw3.2.h"
#include <iostream>
#include <format>
using namespace std;

class A{
    int x;
public:
    A() {cout << "hello world!" << endl;}
};

class B{ 
    static A a;
public:
    B() {}
    static A getA() {
        return a;
    }
};

A B::a;

int main() {
	cout << "main";
	return 0;
}