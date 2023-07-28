#include<iostream>
using namespace std;

void MoveEmptyPackets(int n, int arr[]) {
    int count = 0;
    int arr1[n];
    for (int i=0; i<n; i++) {
        if (arr[i]!=0) {
            arr1[i] = arr[i];
            count++;
        }
    }
    for (int i=count; i<n; i++) {
        arr1[i] = 0;
    }

    for (int i=0; i<n; i++) {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}

int main() {

    int n;
    cout<<"Enter the number of packets : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the number of chocolates in packets : ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    MoveEmptyPackets(n, arr);

    return 0;
}