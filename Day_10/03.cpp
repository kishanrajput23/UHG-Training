#include <iostream>

using namespace std;

bool areCoPrimes(int a, int b) {
    while (b!=0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a == 1;
}

int countPairs(int arr[], int n) {
    int count = 0;

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (areCoPrimes(arr[i], arr[j])) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int T;
    cout<<"Enter the total number of elements you want to enter (T): ";
    cin>>T;

    int elements[T];
    cout << "Enter the elements: ";
    for (int i=0; i<T; i++) {
        cin>>elements[i];
    }

    int result = countPairs(elements, T);
    cout<<"Number of co-prime pairs: "<<result<<endl;

    return 0;
}
