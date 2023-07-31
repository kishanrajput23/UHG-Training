#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <list>

using namespace std;

int main() {
    vector<int> vec1(10);
    vector<int> vec2(15);
    
    iota(vec1.begin(), vec1.end(), 1);    //assign 10 numbers starting from 0
    
    cout<<"Before copy vec1 elements"<<endl;
    for (auto it : vec1) {
        cout<<it<<" ";
    }
    cout<<endl;
    
    cout<<"After copy vec1 elements into vec2 at backward"<<endl;
    
    copy_backward(vec1.begin(), vec1.end(), vec2.end());    //it just copy elements at backward position

    for (auto it : vec2) {
        cout<<it<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
