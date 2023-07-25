#include <iostream>
using namespace std;

void pushZerosToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements

    // Traverse the array, move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Fill remaining elements with zeros
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}

int main() {
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    pushZerosToEnd(arr, n);

    // Print the modified array
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
