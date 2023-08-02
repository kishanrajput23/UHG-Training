#include<iostream>
using namespace std;

int main() {
    allocator<string> Alloc;
    string *str = Alloc.allocate(3);
    
    Alloc.construct(str, "Wipro");
    Alloc.construct(str+1, "Technologies");
    Alloc.construct(str+2, "Bangalore");

    cout<<"str[0] : "<<str[0]<<endl;
    cout<<"str[1] : "<<str[1]<<endl;
    cout<<"str[2] : "<<str[2]<<endl;

    Alloc.destroy(str);
    Alloc.destroy(str+1);
    Alloc.destroy(str+2);
    
    Alloc.deallocate(str, 3);

    return 0;
}