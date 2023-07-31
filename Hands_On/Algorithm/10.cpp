#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{4,5,1,9,8,0,2,12,10};
    
    nth_element(vec.begin(), vec.begin()+vec.size()/2, vec.end());  // prints median element
    
    cout<<"Median : "<<vec[vec.size()/2]<<endl;
    
    return 0;
}
