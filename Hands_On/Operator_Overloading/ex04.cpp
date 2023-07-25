#include <iostream>

using namespace std;

class sample {
    int x;
    
    public:
    sample(int x) {
        this->x = x;
    }
    
    int operator +(int a) {
    cout<<x<<" "<<a<<endl;    //x means s1.x and a means 100
    int sum = x + a;
    return sum;
    }
};


int main()
{
    sample s1(10), s2(20);
    int sum = s1+100;     //for 2nd function
    cout<<"Sum : "<<sum<<endl;

    return 0;
}
