#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int len = log10(n) + 1;
    int temp=n;
    int sum = 0;

    while(temp!=0) {
        int rem = temp%10;
        sum += pow(rem, len);
        temp /= 10;
    }

    if (sum==n) {
        cout<<"Given number is Armstrong number."<<endl;
    }
    else {
        cout<<"Given number is not Armstrong number."<<endl;
    }

    return 0;
}