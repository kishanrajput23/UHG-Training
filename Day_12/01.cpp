#include<iostream>
using namespace std;

int securityKey(int n) {
    int count = 0;
    int arr[10] = {0};
    while (n!=0) {
        int rem = n%10;
        arr[rem] += 1;
        n /= 10;
    }

    for (int i=0; i<10; i++) {
        if (arr[i]>1) {
            count++;
        }
    }
    if (count>0) {
        return count;
    }
    return -1;
}

int main() {
    int num;
    cout<<"Enter the input data : ";
    cin>>num;

    cout<<securityKey(num)<<endl;;

    return 0;
}