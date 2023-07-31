#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class sample {
    public:
    int x,y;

    sample(int x, int y) {
        this->x = x;
        this->y = y;
    }
    
    bool operator <(sample &p1) {
        return (x+y) < (p1.x+p1.y);
    }
};

int main()
{
    vector<sample> vec{{1,2}, {3,5}, {2,3}};

    sort(vec.begin(), vec.end());
    
    for (auto ele : vec) {
        cout<<ele.x<<" "<<ele.y<<endl;
    }
    cout<<endl;
    
    return 0;
}
