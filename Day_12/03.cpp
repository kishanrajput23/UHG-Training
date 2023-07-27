#include<iostream>
using namespace std;

int sumOfAdjDistance(int size, int arr[]) {
    int sum = 0;
    for (int i=0; i<size-1; i++) {
        sum += abs(arr[i] - arr[i+1]);
    }
    return sum;
}

int main() {

    int arr[5] = {10, 11, 7, 12, 14};

    cout<<sumOfAdjDistance(5, arr)<<endl;

    return 0;
}