#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec {1,9,4,3,7,33,12,67,2};
    
    sort(vec.begin(), vec.end());   //sort elements in ascending order
    
    for (auto it : vec) {
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}
