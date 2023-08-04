#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    multiset<int> set1 = {1, 3, 5, 5, 6, 7};
    multiset<int> set2 = {3, 4, 5, 5, 6, 9};
    multiset<int> set3 = {1, 2, 3, 5, 5, 10};

    multiset<int> intersection;
    
    for (int num : set1) {
        if (set2.count(num) && set3.count(num)) {
            intersection.insert(num);
        }
    }

    cout << "Intersection of the sets:" << endl;
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
