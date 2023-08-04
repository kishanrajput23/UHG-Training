#include<iostream>
#include<exception>

using namespace std;

template <typename T>

void fun(T a) throw(int, char) {
    if (a==0) {
        throw a;
    }
    if (a=='A') {
        throw 'A';
    }
}

int main() {
    int a=0; char c='A';
    try{
        fun (c);
    }
    catch(int i){
        cout<<"error: Value of int a is "<<i<<endl;
    }
    catch (char i){
        cout<<"error: Value of char c is "<<i<<endl;
    }
    return 0;
}