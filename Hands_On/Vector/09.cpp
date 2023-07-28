#include<iostream>
#include<stack>
using namespace std;

void display_stack(stack<string> st) {

    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    stack<string> colors;
    
    colors.push("Red");
    colors.push("Orange");
    colors.push("Blue");
    
    cout<<"Initial Stack: ";
    display_stack(colors);

    cout<<"After Pop Operation"<<endl;
    colors.pop();
    
    cout<<"Final Stack: ";
    display_stack(colors);
    
    return 0;
}
