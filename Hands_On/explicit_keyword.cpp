#include<iostream>
using namespace std;

class Demo {

    private:
    int demo1;

    public:
    explicit Demo(int n) {
        demo1 = n;
    }
    int getDemo() {
        return demo1;
    }
};

void getDemoExternally(Demo demo) {
    cout<<demo.getDemo()<<endl;;
}

int main() {

    // getDemoExternally(10);    //it will give an error if we use explicit keyword before Demo constructor

    return 0;
}