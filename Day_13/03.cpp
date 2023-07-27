#include<iostream>
using namespace std;

bool isPerfectSquare(int n) {
    int flag = 0;
    for (int i=1; i<=n; i++) {
        if (i*i == n) {
            flag = 1;
            break;
        }
        if (i*i > n) {
            break;
        } 
    }
    if (flag==1) {
        return true;
    }
    return false;
}

int GCA(int n, int arr[]) {
    int count = 0;
    for (int i=0; i<n; i++) {
        if (isPerfectSquare(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int n,k;
    cout<<"Enter the number of plots : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the area of N plots : ";
    for (int i=0; i<n; i++) {
        cin>>k;
        arr[i] = k;
    }

    cout<<"Selected Outlets : "<<GCA(n, arr)<<endl;

    return 0;
}