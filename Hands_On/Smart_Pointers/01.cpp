#include <iostream>

using namespace std;

class integer {
    int *data;
    
    public:
    integer(int *p) {
        data = p;
    }
    
    ~integer() {
        cout<<"Destructor"<<endl;
        delete data;
    }
    
    int& operator *() {
        return *data;
    }
 };

int main()
{
    int *p = new int(10);
    integer in(p);
    cout<<*in<<endl;
    
    return 0;
}
