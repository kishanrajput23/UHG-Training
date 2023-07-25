#include <iostream>

using namespace std;

class sample {
    int x;
    
    public:
    sample(int x) {
        this->x = x;
    }
    
    void disp() {
        cout<<x<<endl;
    }
    
    sample operator +(sample &s);    //declaring operator function inside the class and defining outside the class
};

sample sample::operator +(sample &s) {
    cout<<x<<" "<<s.x<<endl;    //x means s1.x and s.x means s2.x
    s.x = x + s.x;
    return s; 
}


int main()
{
    sample s1(10), s2(20);
    sample s3=s1+s2;
    s3.disp();

    return 0;
}
