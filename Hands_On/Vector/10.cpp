#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<double> nums;
    
    cout<<"Is stack empty? : ";
    if (nums.empty()) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    
    cout<<"Pushing Elements..."<<endl;
    
    nums.push(2.3);
    nums.push(9.7);
    
    cout<<"Is stack empty? : ";
    if (nums.empty()) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    
    return 0;
}
