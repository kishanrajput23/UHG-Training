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
    
    cout<<"After copy vec1 elements into vec2 which is of 10 size"<<endl;
    
    copy(vec1.begin(), vec1.end(), back_inserter(vec2));    //insert elements after the size of vector means in starting vector is filled with 0
    
    for (auto it : vec2) {
        cout<<it<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
