#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec1{1,2,3,4,5,6,7,8,9,10};
    
    if (binary_search(vec1.begin(), vec1.end(), 5)) {
        cout<<"Element Found"<<endl;
    }
    else {
        cout<<"Element Not Found"<<endl;
    }
    
    vector<int> vec2{2,3,4,12,15};
    
    for (auto it : vec2) {
        if (binary_search(vec1.begin(), vec1.end(), it)) {
            cout<<"vec2 element found : "<<it<<endl;
        }
        else {
            cout<<"vec2 element not found : "<<it<<endl;
        }
    }
    return 0;
}