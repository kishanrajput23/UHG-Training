#include<iostream>
#include<deque>

using namespace std;

int main() {
    deque<int> deque1 {1,2,3,4,5,6};
    
    cout<<"Deque1 : ";
    
    for (int n : deque1) {
        cout<<n<<" ";
    }
    cout<<endl;
    
    cout<<"Front Element : "<<deque1.front()<<endl;
    cout<<"Back Element : "<<deque1.back()<<endl;
    cout<<"Element at Index 1 : "<<deque1.at(1)<<endl;
    cout<<"Element At Index 0 : "<<deque1[0]<<endl;
    
    return 0;
}
