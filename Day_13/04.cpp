#include<iostream>
using namespace std;

int BucketizeIds(int n) {
    int maxi = 0;
    while(n!=0) {
        int rem = n%10;
        if (maxi<rem) {
            maxi = rem;
        }
        n /= 10;
    }
    return maxi;
}

int main() {
    int n;
    cout<<"Enter item identity number : ";
    cin>>n;

    cout<<"Item No : "<<BucketizeIds(n)<<endl;

    return 0;
}