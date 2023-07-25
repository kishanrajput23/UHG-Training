#include<iostream>
using namespace std;

void printPattern(int n) {
    int count = 1;
    for (int i=1; i<=n; i++) {
        if (i%2!=0) {
            for (int j=1; j<=i; j++) {
                cout<<count;
                count++;
                if (j<i) {
                    cout<<"*";
                }
            }
            cout<<endl;
        }
        else {
            int itr = count+i-1;
            for (int j=1; j<=i; j++) {
                cout<<itr--;
                if (j<i) {
                    cout<<"*";
                }
            }
            count += i;
            cout<<endl;
        }
    }
}

int main() {

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    printPattern(n);

    return 0;
}