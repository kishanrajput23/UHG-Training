#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    vector<int> vec1(10);
    vector<int> vec2(10);
    
    iota(vec1.begin(), vec1.end(), 1);    //assign 10 numbers starting from 0
    
    cout<<"Before copy vec1 elements"<<endl;
    for (auto it : vec1) {
        cout<<it<<" ";
    }
    cout<<endl;
    
    cout<<"After copy vec1 elements into vec2"<<endl;
    
    copy(vec1.begin(), vec1.end(), vec2.begin());       //method 2 to copy one vector into another
    
    for (auto it : vec2) {
        cout<<it<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
