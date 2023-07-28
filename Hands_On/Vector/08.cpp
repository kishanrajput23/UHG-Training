#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> colors;
    
    colors.push("Red");
    colors.push("Orange");
    colors.push("Blue");
    
    cout<<"Stack : "<<endl;
    
    while(!colors.empty()) {
        cout<<colors.top()<<endl;
        colors.pop();
    }
    cout<<endl;
    
    return 0;
}
