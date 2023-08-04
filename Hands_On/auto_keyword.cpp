#include <iostream>
using namespace std;


int main() {
    int a=2, b=4;
    string x="wipro", y=" bang";
    
    auto add = [](auto x, auto y){return x+y;};
    
    cout<<add(a,b)<<endl;
    cout<<add (x,y);

    return 0;
}