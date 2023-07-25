#include <iostream>
#include <algorithm>

using namespace std;

int findKthSmallest(int arr[], int n, int k) {
    sort(arr, arr + n);
    return arr[k - 1];
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int kthSmallest = findKthSmallest(arr, n, k);

    cout << "The " << k << "'th smallest element is: " << kthSmallest << endl;

    return 0;
}
