#include <iostream>

using namespace std;

int main()
{
    pair<int, int> pair1, pair2;
    pair<int, string> pair3;
    
    pair1 = make_pair(1, 2);
    pair2 = make_pair(2, 4);
    pair3 = make_pair(1, "hello");
    
    cout<<pair1.first<<endl;
    cout<<pair1.second<<endl;
    
    if (pair1==pair2) {
        cout<<"Pairs are equal"<<endl;
    }
    else {
        cout<<"Pairs are not equal"<<endl;
    }
    
    
    return 0;
}
