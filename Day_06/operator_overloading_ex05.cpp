#include <iostream>

using namespace std;

class sample {
    int x;
    
    public:
    sample(int x) {
        this->x = x;
    }
    
    sample operator +(sample &s) {
    cout<<x<<" "<<s.x<<endl;    //x means s1.x and a means 100
    s.x = x + s.x;
    return s;
    }
    
    void disp() {
        cout<<x<<endl;
    }
};


int main()
{
    sample s1(10), s2(20);
    sample s3=s1+s2;
    s3.disp();

    return 0;
}
