#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec {2,4,3,8,6,9};

    auto it = find(vec.begin(), vec.end(), 10);
    
    // finding element whether it is present in given vector or not
    
    if (it == vec.end()) {
        cout<<"Element not found"<<endl;
    }
    else {
        cout<<"Element found"<<endl;
    }

    return 0;
}
