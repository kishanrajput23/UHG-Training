#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<int> nums;
    
    nums.push(1);
    nums.push(2);
    nums.push(3);
    
    int front = nums.front();
    cout<<"First Element : "<<front<<endl;
    
    int back = nums.back();
    cout<<"Last Element : "<<back<<endl;
    
    return 0;
}
