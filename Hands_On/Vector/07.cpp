#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> language;
    
    language.push("c++");
    language.push("java");
    language.push("python");
    
    cout<<language.top();
    
    return 0;
}
