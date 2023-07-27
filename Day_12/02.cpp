#include<iostream>
using namespace std;

int encodeNumber(int n1, int n2) {
    int count = 0;
    int arr[10] = {0};
    while (n1!=0) {
        int rem = n1%10;
        arr[rem] += 1;
        n1 /= 10;
    }

    return arr[n2];
}

int main() {
    int num, digit;
    cout<<"Enter the encoded number : ";
    cin>>num;

    cout<<"Enter the digit which needs to be find : ";
    cin>>digit;

    cout<<encodeNumber(num, digit)<<endl;;

    return 0;
}