#include<iostream>
using namespace std;

int NewYearDiscount(int n) {
    int sum = 0;
    while(n!=0) {
        int rem = n%10;
        if (rem%2!=0) {
            sum += rem;
        }
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout<<"Enter bill amount : ";
    cin>>n;

    cout<<"Discount : "<<NewYearDiscount(n)<<endl;

    return 0;
}