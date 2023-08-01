#include <iostream>

using namespace std;

template <class T>

class sp {
    T *data;
    
    public:
    sp(T *p) {
        data = p;
    }
    
    ~sp() {
        cout<<"Destructor"<<endl;
        delete data;
    }
    
    T& operator *() {
        return *data;
    }
 };

int main()
{
    int *p = new int(10);
    sp<int> in(p);
    cout<<*in<<endl;
    
    return 0;
}
