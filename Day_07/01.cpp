#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n<=1) {
        return false;
    }

    for(int i=2; i<n; i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;

}

int FibonacciSeries(int n) {
    int term1 = 1;
    int term2 = 1;
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;

    for (int i=2; i<=n/2; i++) {
        int nextTerm = term1 + term2;
        arr[i] = nextTerm;

        term1 = term2;
        term2 = nextTerm;
    }
    
    return arr[n/2];
}

int PrimeSeries(int n) {
    int arr[n];
    int count=0; 
    
    for (int i=0; i<n*2; i++) {
        if (isPrime(i)) {
            arr[count] = i;
            count++;
        }
    }
    
    return arr[(n/2)-1];
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    
    cout<<"The "<<n<<"th term value of the series is : ";
    
    if (n%2==0) {
        cout<<PrimeSeries(n)<<endl;
    }
    else {
        cout<<FibonacciSeries(n)<<endl;
    }
    
    return 0;
}

