#include <iostream>
using namespace std;

int main() {
    string n = "name";
    
    string_view m{n};
    
    string_view p{n.substr(0,3)};
    
    cout<<n<<" "<<m<<" "<<p;

    return 0;
}