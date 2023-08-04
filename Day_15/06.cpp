#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<int> nums = {1,2,3,2,1,4,2,5,3,2,1,5,3,5,8,1,4};

    map<int, int> freqMap;

    for (int num : nums) {
        freqMap[num]++;
    }

    cout << "Frequency of each element in the vector :" << endl;
    for (auto entry : freqMap) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
