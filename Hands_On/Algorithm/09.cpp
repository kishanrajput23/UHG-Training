#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{4,5,1,9,8,0,2,12,10};
    
    nth_element(vec.begin(), vec.begin()+4, vec.end());
    
    cout<<"5th smalllest number : "<<vec[4]<<endl;      //it doesn't sort elements but return required smallest element
    
    for(auto it : vec) {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;
}
