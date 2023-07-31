#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <list>

using namespace std;

int main() {
    vector<int> vec1(10);
    vector<int> vec2{10, 20};
    
    iota(vec1.begin(), vec1.end(), 1);    //assign 10 numbers starting from 0
    
    cout<<"Before copy vec1 elements"<<endl;
    for (auto it : vec1) {
        cout<<it<<" ";
    }
    cout<<endl;
    
    cout<<"After copy vec1 elements into vec2"<<endl;
    
    copy_n(vec1.begin(), 5, back_inserter(vec2));       //it just copy first 5 elements from vec1 and append after 10 and 20
    
    for (auto it : vec2) {
        cout<<it<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
