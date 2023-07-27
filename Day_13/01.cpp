#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num<=1) {
        return false;
    }
    for (int i=2; i<num; i++) {
        if (num%i==0) {
            return false;
        }
    }
    return true;
}

int OTP(int num1, int num2) {
    int temp1, temp2;
    int mini = 0, maxi = 0;

    if (num1<0) {
        temp1 = num1*-1;
    }
    else {
        temp1 = num1;
    }

    for (int i=0; i<=temp1; i++) {
        if (isPrime(i)) {
            mini = i;
        }
    }
 
    for (int i=0; i<=num2; i++) {
        if (isPrime(i)) {
            maxi = i;
        }
    }

    if (num1<0) {
        return abs((-mini) + maxi);
    }
    else {
        return mini + maxi;
    }
}

int main() {

    int n1, n2;

    cout<<"Enter the first number : ";
    cin>>n1;

    cout<<"Enter the seconf number : ";
    cin>>n2;

    if (n1>=n2) {
        cout<<"First number always be smaller than second number."<<endl;
    }
    else {
        cout<<"OTP : "<<OTP(n1, n2)<<endl;
    }

    return 0;
}