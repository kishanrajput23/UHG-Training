#include<iostream>
using namespace std;

void printPattern(int num) {
    int count  = 1;
    for (int i=1; i<=num; i++) {
        for (int j=1; j<=i; j++) {
            cout<<count;
            if (j<i) {
                cout<<"*";
            }
        }
        count++;
        cout<<endl;
    }

    for (int i=num; i>=1; i--) {
        --count;
        for (int j=i; j>=1; j--) {
            if (j<i) {
                cout<<"*";
            }
            cout<<count;
            
        }
        cout<<endl;
    } 
}

int main() {

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    printPattern(num);
    return 0;
}