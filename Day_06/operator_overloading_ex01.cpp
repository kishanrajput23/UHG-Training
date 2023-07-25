#include <iostream>

using namespace std;

class sample {
    int x;
    
    public:
    sample(int x) {
        this->x = x;
    }
    
    void operator ++() {
        cout<<"Hello ji..."<<endl;
    }
};

int main()
{
    sample s1(10), s2(20);
    ++s1;

    return 0;
}
