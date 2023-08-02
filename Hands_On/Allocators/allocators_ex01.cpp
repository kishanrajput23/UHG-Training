#include<iostream>
#include<memory>

using namespace std;

int main() {
    allocator<int> myAlloc;
    int *arr = myAlloc.allocate(5);
    
    myAlloc.construct(arr, 100);
    myAlloc.construct(arr+1, 200);

    cout<<"arr[0] : "<<arr[0]<<endl;
    cout<<"arr[1] : "<<arr[1]<<endl;
    
    return 0;
}