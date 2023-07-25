#include <iostream>

using namespace std;

class sample {
    int x;
    
    public:
    sample(int x) {
        this->x = x;
    }
    
    void operator +(sample s) {
        cout<<x<<" "<<s.x<<endl;    //x means s1.x and s.x means s2.x
        int sum = x + s.x;
        cout<<"Sum : "<<sum<<endl;
    }
    
    void operator +(int a) {
        cout<<x<<" "<<a<<endl;    //x means s1.x and a means 100
        int sum = x + a;
        cout<<"Sum : "<<sum<<endl;
    }
    
    friend void operator +(int a, sample &s);
    
};

void operator +(int a, sample &s) {
    cout<<a<<" "<<s.x<<endl;    //a means 100 and s.x means s1.x
    int sum = a + s.x;
    cout<<"Sum : "<<sum<<endl;
}
    
int main()
{
    sample s1(10), s2(20);
    s1+s2;      //for 1st function
    s2+s1;      //for 1st function
    s1+100;     //for 2nd function
    100+s1;     //for 3rd function

    return 0;
}
