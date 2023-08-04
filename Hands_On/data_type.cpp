#include<iostream>
using namespace std;

int fun1() { return 10; }
char fun2() { return 'g'; }

int main() {

    // Data type of x is same as return type of fun1 ()
    // and type of y is same as return type of fun2() 
    decltype(fun1()) x = fun1() ;       //int x=fun1();
    decltype(fun2()) y = fun2() ;        //char c-fun2();
    
    cout << x << " " << typeid(x).name() << endl; 
    cout << y << " " << typeid(y).name() << endl;

    return 0;
}