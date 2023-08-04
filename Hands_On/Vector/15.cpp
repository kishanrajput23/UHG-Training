#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> v{2,8,6};
    sort(v.begin(), v.end(), [](int a, int b) {return a<b;});
    for (auto i=v.begin(); i!=v.end(); i++) {
        cout << *i << " ";       //for printing vector
    }
    return 0;
}