#include <iostream> 
using namespace std;

class Y {
    int b=9;
    public:
    operator int ();
};

Y::operator int () {
    return b;
}

void f(Y obj) {
    int i = int(obj);
    int j = (int)obj;
    int k = i + obj;
    cout<<i<<" "<<j<<" "<<k;
}

int main() {
    Y y;
    f(y);
    return 0;
}