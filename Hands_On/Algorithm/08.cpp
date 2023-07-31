#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1,5,2,7,4,3};

    sort(vec.begin(), vec.end(), [](int a, int b) {return a<b;});

    for (auto ele : vec) {
        cout<<ele<<" "<<endl;
    }
    cout<<endl;
    
    cout<<is_sorted(vec.begin(), vec.end())<<endl;  //return 1 if vector is in sorted order
    
    return 0;
}
