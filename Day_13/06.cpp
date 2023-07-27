#include<iostream>
using namespace std;

int LuckyCustomer(int n) {
    int first = 1;
    int second = 1;
    int third = 0;

    for (int i=3; i<=n; i++) {
        third = first + second;
        first = second;
        second = third;
    }
    return second;
}

int main() {
    int n;
    cout<<"Enter the token number : ";
    cin>>n;

    cout<<"Lucky Customer Order ID : "<<LuckyCustomer(n)<<endl;

    return 0;
}